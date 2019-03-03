#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
using namespace std;

int isPrime(int n){
    if(n<2){
        return false;
    }
    int flag=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return flag;
}

int main()
{

    int res[10005]={0};
    int N;
    cin>>N;
    int rank;
    for(int i=0;i<N;i++){
        cin>>rank;
        res[rank]=i+1;
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>rank;
        if(res[rank]==1){
            printf("%04d: %s\n",rank,"Mystery Award");
            res[rank]=-1;
        }else if(isPrime(res[rank])){
            printf("%04d: %s\n",rank,"Minion");
            res[rank]=-1;
        }else if(res[rank]>0){
            printf("%04d: %s\n",rank,"Chocolate");
            res[rank]=-1;
        }else if(res[rank]==-1){
            printf("%04d: %s\n",rank,"Checked");
        }else{
            printf("%04d: %s\n",rank,"Are you kidding?");
        }
    }

    return 0;
}
