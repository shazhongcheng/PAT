#include<iostream>
#include<string>
using namespace std;

int main(){

    string A;
    int B,Q[1000],R,i,j=0,k;
    cin>>A>>B;
    for(k=0;A[k]-'0'==0&&k<A.length();k++);
    i=k;
    R=A[i]-'0';
    if(R<B&&i==A.length()-1){
        cout<<"0 "<<R;
        return 0;
    }
    while(R<B) R=R*10+(A[++i]-'0');

    Q[j++]=R/B;
    R%=B;

    while(++i<A.length()){
        R=R*10+(A[i]-'0');
        Q[j++]=R/B;
        R%=B;
    }
    for(i=0;i<j;i++) cout<<Q[i];

    cout<<" "<<R;

    return 0;
}
