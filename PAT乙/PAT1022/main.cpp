#include <iostream>

using namespace std;

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    int c=a+b;
    if(c==0){
        printf("0");
        return 0;
    }
    int res[2000],pos=0;
    while(c!=0){
        res[pos]=c%n;
        c/=n;
        pos++;
    }
    for(int i=pos-1;i>=0;i--){
        cout<<res[i];
    }
    return 0;
}
