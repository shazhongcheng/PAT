#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
void fun1(string t);
void fun2(string t);

string a[13]={"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13]={"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

int tt,temp,temp1,ans=0;
int main(){
    string t;
    int n;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++){
        getline(cin,t);
        if(t[0]>='0'&&t[0]<='9') fun1(t);
        else fun2(t);
        cout<<endl;
    }
    return 0;
}

void fun1(string t){
    int len=t.length();
    int num=0;
    for(int i=0;i<len;i++){
        num=num*10+(t[i]-'0');
    }
    cout<<b[num/13];
    if((num%13)&&(num/13))cout<<" "<<a[num%13];
    //段错误
//    else cout<<a[num];
    else if(num%13)cout<<a[num%13];//没有进位
	else if(num==0)cout<<"tret";//为零的情况
}

void fun2(string t){
    if(t.size()==3){
        for(int i=0;i<13;i++){
            if(t==b[i]){
                cout<<i*13;
                break;
            }
        }
        for(int i=0;i<13;i++){
            if(t==a[i]){
                cout<<i;
                break;
            }
        }
    }else if(t.size()==4){
        cout<<"0";
    }else{
        string aa=t.substr(0,3);
        string bb=t.substr(4,3);
        for(int i=0;i<13;i++){
            if(aa==b[i]) temp=13*i;
            if(bb==a[i]) temp1=i;
        }
        cout<<temp+temp1;
    }
}

////节点 2 4 过不去
//#include <iostream>
//#include <string>
//#include <string.h>
//#include <cstdio>
////#include <stdlib.h>
//using namespace std;
//char a[13][4]={"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
//char b[13][5]={"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
//
//int main()
//{
//    int n;
//    cin>>n;
//    string str;
//    getchar();
//    for(int i=0;i<n;i++){
//        getline(cin,str);
//        if(str[0]>='0' && str[0]<='9'){
//            int num=0;
//            for(int j=0;j<str.length();j++){
//                num=num*10+str[j]-'0';
//            }
//            if(num>=13){
//                cout<<a[num/13]<<" "<<b[num%13]<<endl;
//            }else{
//                cout<<b[num]<<endl;
//            }
//        }else{
//            int num=0;
//            char temp[5];
//            int j=0;
//            while(j<str.length()&&str[j]!=' '){
//                temp[j]=str[j];
//                j++;
//            }
//            temp[j]=0;
//            for(int k=1;k<13;k++){
//                if(strcmp(temp,a[k])==0){
//                    num=k*13;
//                }
//            }
//            for(int k=1;k<13;k++){
//                if(strcmp(temp,b[k])==0){
//                    num=k;
//                }
//            }
//            if(str[j]==' '){
//                j++;
//                int k=j;
//                while(j<str.length()){
//                    temp[j-k]=str[j];
//                    j++;
//                }
//                temp[j-k]=0;
//                for(int k=0;k<13;k++){
//                    if(strcmp(temp,b[k])==0){
//                        num+=k;
//                    }
//                }
//            }
//            cout<<num<<endl;
//        }
//    }
//    return 0;
//}
