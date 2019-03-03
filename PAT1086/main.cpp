#include <iostream>

using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    long long c=a*b;
    int flag=0;
    while(c){
        if(!flag && c%10==0){

        }else{
            flag=1;
            cout<<c%10;
        }
        c/=10;

    }
    return 0;
}
