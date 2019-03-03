//Ã»Ð´³öÀ´
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    string s;
    int len0=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='E'){
            for(int j=i+2;j<s.length();j++){
                len0=len0*10+(s[j]-'0');
            }
            if(s[0]=='-'){
                cout<<"-";
            }
            if(len0==0){
                for(int j=1;j<i;j++){
                    cout<<s[j];
                }
            }else if(s[i+1]=='+'){
                cout<<s[1];
                if(len0<i-3){
                    for(int j=3;j<3+len0;j++)
                        cout<<s[j];
                    cout<<".";
                    for(int j=3+len0;j<i;j++)
                        cout<<s[j];
                }else{
                    for(int j=3;j<i;j++)
                        cout<<s[j];
                    for(int j=1;j<=len0-(i-3);j++)
                        cout<<0;
                }
            }else{
                cout<<"0.";
                for(int j=1;j<len0;j++)
                    cout<<0;
                cout<<s[1];
                for(int j=3;j<i;j++){
                    cout<<s[j];
                }
            }
            return 0;
        }

    }

    return 0;
}
