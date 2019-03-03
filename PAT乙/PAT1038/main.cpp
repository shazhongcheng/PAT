#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

int main()
{
    int num[105];
    memset(num,0,sizeof(int)*105);
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        num[temp]++;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        printf("%d",num[temp]);
        if(i!=n-1){
            printf(" ");
        }
    }
    return 0;
}
