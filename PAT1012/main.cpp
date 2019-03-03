#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int temp;
    int a1=0,a2=0,a3=0,a5=0;
    int flag2=1;
    int count2=0;
    double a4=0;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp%5==0 && temp%2==0){
            a1+=temp;
        }
        if(temp%5==1){
            a2+=temp*flag2;
            flag2*=-1;
            count2++;//有可能最后和为0！！
        }
        if(temp%5==2){
            a3++;
        }
        if(temp%5==3){
            a4+=temp;
            count++;
        }
        if(temp%5==4){
            if(a5<temp){
                a5=temp;
            }
        }
    }
    if(a1){
        printf("%d",a1);
    }else{
        printf("N");
    }
    if(count2){
        printf(" %d",a2);
    }else{
        printf(" N");
    }
    if(a3){
        printf(" %d",a3);
    }else{
        printf(" N");
    }
    if(a4){
        printf(" %.1lf",a4/count);
    }else{
        printf(" N");
    }
    if(a5){
        printf(" %d",a5);
    }else{
        printf(" N");
    }
    return 0;
}
