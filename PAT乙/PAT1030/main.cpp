#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[100005];
    int N,p;
    cin>>N>>p;
    for(int i=0;i<N;i++){
        cin>>num[i];
    }
    sort(num,num+N);
    int ans=1;
    int i=0,j=0;
    while(i<N&&j<N){
        while(j<N&&num[j]<=(long long)num[i]*p) j++;
        ans = max(j-i,ans);
        i++;
    }
    cout<<ans;

    return 0;
}
