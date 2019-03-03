#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string,int> m;
    int M,N,S;
    cin>>M>>N>>S;
    string str;
    if(M<S){
        cout<<"Keep going...";
        return 0;
    }
    for(int i=0,j=0;i<S;i++){
        cin>>str;
    }
    cout<<str<<endl;
    m[str]++;
    int count=0;
    for(int i=0;i<M-S;i++){
        cin>>str;
        count++;
        if(count%N==0 && m[str]!=1){
            m[str]++;
            count=0;
            cout<<str<<endl;
        }else if(count%N==0){
            count--;
        }
    }

    return 0;
}
