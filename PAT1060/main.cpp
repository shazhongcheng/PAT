#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int N;
    cin>>N;
    int num[N];
    for(int i=0;i<N;i++){
        cin>>num[i];
    }
    sort(num,num+N);
//    for(int i=0;i<N;i++){
//        cout<<num[i]<<" ";
//    }

    if(N<num[0]){
        cout<<N;
    }
    else{
        int ans=1;
        for(int j=N-1;j>=0;j--){
            if(num[j]<=N-j){
                ans=N-j-1;
                break;
            }
        }
        cout<<ans;
    }


    return 0;
}
