#include <iostream>
#include <string>
using namespace std;

struct info{
    string num;
    int n1;
    int n2;
}in[1005];

int main()
{
    int N;
    cin>>N;
    info temp;
    for(int i=0;i<N;i++){
        cin>>temp.num>>temp.n1>>temp.n2;
        in[temp.n1].num=temp.num;
        in[temp.n1].n1=temp.n1;
        in[temp.n1].n2=temp.n2;

    }
    cin>>N;
    int tempn;
    for(int i=0;i<N;i++){
        cin>>tempn;
        cout<<in[tempn].num<<" "<<in[tempn].n2<<endl;
    }
    return 0;
}
