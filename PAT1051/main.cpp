#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    double r1,p1,r2,p2;
    cin>>r1>>p1>>r2>>p2;
    double a=r1*r2*cos(p1+p2);
    double b=r1*r2*sin(p1+p2);
    //节点4
    if(fabs(a)<0.01){
        a=0;
    }
    if(fabs(b)<0.01){
        b=0;
    }
    if(b<0){
        printf("%.2lf-%.2lfi",a,fabs(b));
    }else{
        //节点 2 3
        printf("%.2lf+%.2lfi",a,b);
    }
    return 0;
}
