#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int res=0;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            res+=str[i]-'a'+1;
        }
        if(str[i]>='A' && str[i]<='Z'){
            res+=str[i]-'A'+1;
        }
    }
    int count0=0,count1=0;
//    cout<<
    while(res){
        if(res%2){
            count1++;
        }else{
            count0++;
        }
        res/=2;
    }

    cout<<count0<<" "<<count1;
    return 0;
}
