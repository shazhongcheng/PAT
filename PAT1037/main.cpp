#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int a1,a2,a3;
    int b1,b2,b3;
    scanf("%d.%d.%d",&a1,&a2,&a3);
    scanf("%d.%d.%d",&b1,&b2,&b3);
    int c1=b1-a1;
    int c2=b2-a2;
    if(c2<0){
        c1--;
        c2+=17;
    }
    int c3=b3-a3;
    if(c3<0){
        c2--;
        if(c2<0){
            c1--;
            c2+=17;
        }
        c3+=29;
    }
    if(c1==0&&c2==0&&c3==0){
        printf("0.0.0");
    }
    else if(c1<0||c2<0||c3<0){
        c1=a1-b1;
        c2=a2-b2;
        c3=a3-b3;
        if(c2<0){
            c1--;
            c2+=17;
        }
        if(c3<0){
            c2--;
            if(c2<0){
                c1--;
                c2+=17;
            }
            c3+=29;
        }
        printf("%d.%d.%d",-1*c1,c2,c3);
    }else{
        printf("%d.%d.%d",c1,c2,c3);
    }


    return 0;
}
