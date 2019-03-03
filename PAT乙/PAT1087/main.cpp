#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int res[100005]={0};
    int n;
    int count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        double temp=i;
        int ops=floor(temp/2)+floor(temp/3)+floor(temp/5);
        if(!res[ops]){
            res[ops]=1;
            count++;
        }
    }
    cout<<count;
    return 0;
}
