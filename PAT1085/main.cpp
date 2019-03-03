#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
struct school{
    string name;
    double count;
    int num;
};
map <string,int> mark;
int cmp(school s1,school s2){
    return !(floor(s1.count)==floor(s2.count))?(floor(s1.count)>floor(s2.count)):(!(s1.num==s2.num)?(s1.num<s2.num):(s1.name<s2.name));
}
int main()
{
    int n;
    string str1,str2;
    double c;
    cin>>n;
    vector<school> s;
    int all=1;
    for(int i=0;i<n;i++){
        cin>>str1>>c>>str2;
        transform(str2.begin(),str2.end(),str2.begin(),::tolower);
        if(mark[str2]){
            if(str1[0]=='B')
                s[mark[str2]-1].count+=(c/1.5);
            if(str1[0]=='A')
                s[mark[str2]-1].count+=(c);
            if(str1[0]=='T')
                s[mark[str2]-1].count+=(c*1.5);
            s[mark[str2]-1].num++;
        }else{
            mark[str2]=all;
            all++;
            school temp={name:str2,count:c,num:1};
            if(str1[0]=='B')
                temp.count=(c/1.5);
            if(str1[0]=='A')
                temp.count=(c);
            if(str1[0]=='T')
                temp.count=(c*1.5);
            s.push_back(temp);
        }
//        cout<<str2;
    }
    sort(s.begin(),s.end(),cmp);
    int now=1;
    cout<<s.size()<<endl;
    cout<<now<<" "<<s[0].name<<" "<<floor(s[0].count)<<" "<<s[0].num<<endl;
    for(int i=1;i<s.size();i++){
        if(floor(s[now-1].count)==floor(s[i].count))
            cout<<now<<" "<<s[i].name<<" "<<floor(s[i].count)<<" "<<s[i].num<<endl;
        else{
            now=i+1;
            cout<<now<<" "<<s[i].name<<" "<<floor(s[i].count)<<" "<<s[i].num<<endl;
        }
    }
    return 0;
}
