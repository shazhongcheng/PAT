#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num[10006]={0};
    int n;
    cin>>n;
    int temp;
    for(int i=1;i<=n;i++){
        cin>>temp;
        num[(int)abs(temp-i)]++;
    }
    for(int i=n;i>=0;i--){
        if(num[i]>1){
            cout<<i<<" "<<num[i]<<endl;
        }
    }
    return 0;
}
