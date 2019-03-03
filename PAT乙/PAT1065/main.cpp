// 可以过 时间度太高
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{

    map<int,int> fire;
    int n;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        fire.insert(pair<int,int>(a,b));
        fire.insert(pair<int,int>(b,a));
    }
    cin>>n;
    map<int,int>::iterator it;
    int res[100000]={0};
    for(int i=0;i<n;i++){
        cin>>a;
        it=fire.find(a);
        if(it==fire.end()){
            res[a]++;
        }else{
            res[it->first]++;
            res[it->second]+=2;
        }
    }
    int count=0;
    for(int i=0;i<100000;i++){
        if(res[i]==1){
            count++;
        }
    }
    cout<<count<<endl;
    int flag=0;
    for(int i=0;i<100000;i++){
        if(res[i]==1){
            if(flag==0){
                printf("%05d",i);
                flag=1;
            }else{
                printf(" %05d",i);
            }
        }
    }
    return 0;
}
