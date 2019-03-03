#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int res[N]={0};
    int temp;
    for(int i=0;i<N;i++){
        cin>>temp;
        while(temp>0){
            res[i]+=temp%10;
            temp/=10;
        }
    }
    sort(res,res+N);
    int flag=0;
    int count=0;
    for(int i=0;i<N;i++){
        if(!flag){
            count++;
            flag=1;
        }else{
            if(res[i]!=res[i-1])
                count++;
        }
    }
    cout<<count<<endl;
    flag=0;
    for(int i=0;i<N;i++){
        if(!flag){
            cout<<res[i];
            flag=1;
        }else{
            if(res[i]!=res[i-1])
                cout<<" "<<res[i];
        }
    }
    return 0;
}
