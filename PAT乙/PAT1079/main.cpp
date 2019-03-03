#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int isHuiWen(string str){
    for(int i=0;i<str.length()/2;i++){
        if(str[i]!=str[str.length()-i-1]){
            return 0;
        }
    }
    return 1;
}

void print1(string str,string res){
    cout<<str<<" + ";
    reverse(str.begin(),str.end());
    cout<<str<<" = "<<res;
    cout<<endl;
}

void print2(string res){
    cout<<res<<" is a palindromic number.\n";
}

void print3(){
    cout<<"Not found in 10 iterations.\n";
}
int main()
{
    string str;
    string res;
    cin>>str;
    int count=0;
    if(isHuiWen(str)){
        print2(str);
        return 0;
    }
    while(count<10){
        int temp=0;
        res="";
        for(int i=0;i<str.length();i++){
            temp=str[i]-'0'+str[str.length()-i-1]-'0'+temp;
            res=(char)(temp%10+'0')+res;
            temp/=10;
        }
        if(temp>0){
            res=(char)(temp+'0')+res;
        }
        if(isHuiWen(res)){
            print1(str,res);
            print2(res);
            return 0;
        }
        print1(str,res);
        str=res;
        count++;
    }
    print3();
    return 0;
}
