#include <iostream>
#include <cstdio>
using namespace std;

int Gcd(int a,int b){
    return a%b==0?b:Gcd(b,a%b);
}

int main()
{
    int a1,b1,a2,b2,k;
    scanf("%d/%d %d/%d %d",&a1,&b1,&a2,&b2,&k);
    int flag=1;
    if((a1/(b1*1.0))>(a2/(b2*1.0))){
        swap(a1,a2);
        swap(b1,b2);
    }
    for(int i=1;i/(k*1.0)<(a2/(b2*1.0));i++){
        if(i/(k*1.0)>(a1/(b1*1.0))){
            if(Gcd(i,k)==1){
                if(flag){
                    printf("%d/%d",i,k);
                    flag=0;
                }
                else
                    printf(" %d/%d",i,k);
            }
        }
    }

    return 0;
}
