#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    int dui[1005];
    memset(dui,0,sizeof(int)*1005);
    int n;
    int a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d-%d %d",&a,&b,&c);
        dui[a]+=c;
    }
    int max=0;
    for(int i=1;i<1005;i++){
        if(dui[i]>dui[max]){
            max=i;
        }
    }
    cout<<max<<" "<<dui[max];
    return 0;
}
