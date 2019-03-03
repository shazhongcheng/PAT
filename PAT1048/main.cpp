#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    string stra,strb;
    cin>>stra>>strb;
    string c="";
    char key[13]={'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
    //前人采坑处  要加密的比密钥短，要加前导0补齐
    if(strb.length()<stra.length()){
        for(int i=strb.length();i<stra.length();i++){
            strb="0"+strb;
        }
    }
    reverse(stra.begin(),stra.end());
    reverse(strb.begin(),strb.end());
    int i=0;
    for(i=0;i<stra.length();i++){
        if((i+1)%2){
            int temp=(stra[i]-'0'+strb[i]-'0')%13;
            c+=key[temp];
        }else{
            int temp=strb[i]-stra[i];
            if(temp<0)
                temp+=10;
            c+=key[temp];
        }
    }
    for(;i<strb.length();i++){
        c+=strb[i];
    }
    reverse(c.begin(),c.end());
    cout<<c;
    return 0;
}
