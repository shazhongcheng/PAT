#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
/*
如果密码合法，输出Your password is wan mei.；
如果密码太短，不论合法与否，都输出Your password is tai duan le.；
如果密码长度合法，但存在不合法字符，则输出Your password is tai luan le.；
如果密码长度合法，但只有字母没有数字，则输出Your password needs shu zi.；
如果密码长度合法，但只有数字没有字母，则输出Your password needs zi mu.。
*/
void judge(string str){
    bool dflag=false,aflag=false;
    if(str.size()<6){
        cout<<"Your password is tai duan le.\n";
    }else{
        for(unsigned int i=0;i<str.size();i++){
            if(str[i]>='0' && str[i]<='9'){
                dflag=true;
            }else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
                aflag=true;
            }else if(str[i]!='.'){
                cout<<"Your password is tai luan le.\n";
                return;
            }
        }
        if(dflag && aflag){
            cout<<"Your password is wan mei.\n";
        }else if(!dflag){
            cout<<"Your password needs shu zi.\n";
        }else if(!aflag){
            cout<<"Your password needs zi mu.\n";
        }
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    string str;
    getchar();
    for(int i=0;i<n;i++){
        getline(cin,str);
        judge(str);
    }
    return 0;
}
