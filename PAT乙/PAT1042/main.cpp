#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
//    cout<<str;
    int mark[255];
    memset(mark,0,sizeof(int)*255);
    for(int i=0;i<str.length();i++){
        if(str[i]>='A'&&str[i]<='Z')
            mark[str[i]-'A'+'a']++;
        else
             mark[str[i]]++;
//        cout<<str[i];
    }
    int pos='a';

    for(int i='b';i<='z';i++){
        if(mark[pos]<mark[i]){
            pos=i;
        }
    }
    cout<<char(pos)<<" "<<mark[pos]<<endl;

    return 0;
}
