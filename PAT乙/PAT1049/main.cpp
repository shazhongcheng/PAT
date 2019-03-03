#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    double num[100005];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    double res=0;
    for(int i=0;i<n;i++){
        res+=num[i]*(i+1)*(n-i);
    }
    printf("%.2lf",res);
    return 0;
}
