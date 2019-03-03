#include <iostream>

using namespace std;

int main()
{
    int N;
    int num[15];
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num[i];
    }
//    int temp=0;
    int res=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                continue;
            }
            res+=num[i]*10+num[j];
        }
    }
    cout<<res;
    return 0;
}
