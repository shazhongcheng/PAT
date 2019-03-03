#include <iostream>

using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    int grade[M];
    for(int i=0;i<M;i++){
        cin>>grade[i];
    }
    bool ans[M];
    for(int i=0;i<M;i++){
        cin>>ans[i];
    }
    int count=0;
    bool re;
    for(int i=0;i<N;i++){
        count=0;
        for(int j=0;j<M;j++){
            cin>>re;
            if(re==ans[j]){
                count+=grade[j];
            }
        }
        cout<<count<<endl;
    }
}
