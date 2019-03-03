#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a1,a2,b1,b2;
    int counta=0,countb=0;
    for(int i=0;i<n;i++){
        cin>>a1>>a2>>b1>>b2;
        if(a1+b1==a2 && a1+b1==b2){
            continue;
        }else if(a1+b1==a2){
            countb++;
        }else if(a1+b1==b2){
            counta++;
        }
    }
    cout<<counta<<" "<<countb;
    return 0;
}
