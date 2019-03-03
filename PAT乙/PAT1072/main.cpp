#include <iostream>
#include <map>
#include <cstdio>
using namespace std;

int main()
{
    map<string,int> m;
    int N,M;
    cin>>N>>M;
    string temp;
    for(int i=0;i<M;i++){
        cin>>temp;
        m[temp]++;
    }
    string name;
    int n;
    int flag=0;
    int countp=0; //统计人数
    int countn=0; //统计物品
    for(int i=0;i<N;i++){
        cin>>name>>n;
        flag=0;
        for(int j=0;j<n;j++){
            cin>>temp;
            if(m[temp]==1){
                if(flag==0){
                    printf("%s: %s",name.c_str(),temp.c_str());
                    flag=1;
                    countn++;
                }else{
                    printf(" %s",temp.c_str());
                    countn++;
                }
            }
        }
        if(flag){
            countp++;
            printf("\n");
        }
    }
    printf("%d %d\n",countp,countn);
    return 0;
}
