#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    string str;
    int N;
    string in;
    cin>>str>>N;
    getchar();
    for(int i=0;i<N;i++){
        getline(cin,in);
        //节点二错误
        if(in=="#")
            return 0;
        if(in==str){
            cout<<"Welcome in"<<endl;
            return 0;
        }else{
            cout<<"Wrong password: "<<in<<endl;
        }
    }
    cout<<"Account locked"<<endl;
    return 0;
}
