#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main(){
    int T;
    cin>>T;
    char a[50],b[50];
    double temp,sum=0;
    int count=0;
    while(T--){
        //// 字符->数字->字符 比较前后的差异 妙啊
        scanf("%s",a);
        sscanf(a,"%lf",&temp);
        sprintf(b,"%.2lf",temp);
        int flag=0;
////    3.2 会变成 3.20 报错
//        if(strlen(a)!=strlen(b)){
//            flag=1;
//        }else{
//            for(int j=0;j<strlen(a);j++){
//                if(a[j]!=b[j])
//                    flag=1;
//            }
//        }
        for(int j=0;j<strlen(a);j++){
            if(a[j]!=b[j])
                flag=1;
        }
        if(flag || fabs(temp)>1000){
            printf("ERROR: %s is not a legal number\n",a);
        }else{
            count++;
            sum+=temp;
        }
    }
//    //不全
//    if(count){
//        printf("The average of %d numbers is %.2lf\n",count,sum/count);
//    }else{
//        printf("The average of 0 numbers is Undefined\n");
//    }
    if(count>1){
        printf("The average of %d numbers is %.2lf\n",count,sum/count);
    }else if(count==1){
        printf("The average of 1 number is %.2lf\n",sum);
    }
    else{
        printf("The average of 0 numbers is Undefined\n");
    }
    return 0;
}

////思路卡住 往下不好写
//#include <iostream>
//#include <string>
//#include <cstdio>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//int num1,num2;
//
//int judge(string str){
//    num1=0;
//    int i=0;
//    int fu_flag=0;
//    if(str[0]=='-'){
//        fu_flag=1;
//        i++;
//    }
//    for(;i<str.length();i++){
//        if(str[i]=='.'){
//            break;
//        }
//        if(str[i]>='0' && str[i]<='9'){
//            num1=num1*10+str[i]-'0';
//        }else{
//            return 0;
//        }
//    }
//    if(fabs(num1)>1000){
//        return 0;
//    }
//    num2=0;
//    if(i==str.length()){
//        return 1;
//    }
//    i++;
//    if(str.length()-i>2){
//        return 0;
//    }
//    for(;i<str.length;i++){
//        if(str[i]>='0' && str[i]<='9'){
//            num2=num2*10+str[i]-'0';
//        }else{
//            return 0;
//        }
//    }
//    return 1;
//}
//
//double change(){
//    double
//}
//
//int main()
//{
//    int N;
//    cin>>N;
//    string str;
//    double temp=0;
//    int count=0;
//    double res=0;
//    for(int i=0;i<N;i++){
//        cin>>str;
//        if(judge(str)){
//            count++;
//            res+=change();
//        }
//    }
//    return 0;
//}
