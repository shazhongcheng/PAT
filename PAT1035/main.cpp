#include <iostream>
#include <algorithm>
using namespace std;

void print(int a[],int n){
    cout<<a[0];
    for(int i=1;i<n;i++){
        cout<<" "<<a[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int num1[105];
    int testa[105];
    int testb[105];
    for(int i=0;i<n;i++){
        cin>>testa[i];
        testb[i]=testa[i];
    }
    for(int i=0;i<n;i++){
        cin>>num1[i];
    }
    //i=1的时候 节点2会错
    for(int i=2;i<=n;i++){
        sort(testa,testa+i);
        if(equal(testa,testa+n,num1)&&i+1<=n){
            cout<<"Insertion Sort\n";
            sort(testa,testa+i+1);
            print(testa,n);
        }
    }

    for(int k=2;k<=n;){
        for(int i=0;i<n;i+=k){
            sort(testb+i,testb+(i+k<=n?i+k:n));
        }
        k*=2;
        if(equal(testb,testb+n,num1)&&k<=n){
            cout<<"Merge Sort\n";
            for(int i=0;i<n;i+=k){
                sort(testb+i,testb+(i+k<=n?i+k:n));
            }
            print(testb,n);
        }
    }

    return 0;
}
