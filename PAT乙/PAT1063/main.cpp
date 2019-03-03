#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double res=0;
    double temp=0;
    double a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        temp=sqrt(pow(a,2)+pow(b,2));
        if(res<temp){
            res=temp;
        }
    }
    printf("%.2lf",res);
    return 0;
}
