#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char op;
    char ch;
    cin>>op;
    getchar();
    if(op=='C'){
        char temp=0;
        int count;
        while((ch=getchar())!='\n'){
            if(temp==0){
                    temp=ch;
                    count=1;
                }else if(ch==temp){
                    count++;
                }else if(ch!=temp){
                    if(count>1){
                        cout<<count;
                    }
                    cout<<temp;
                    temp=ch;
                    count=1;
                }
        }
        if(count>1){
            cout<<count;
        }
        cout<<temp;
        temp=ch;
        count=1;
    }

    else if(op=='D'){
        char temp=0;
        int count;
        while((ch=getchar())!='\n'){
            if(!isdigit(ch)){
                cout<<ch;
            }else{
                count=ch-'0';
                while(isdigit(ch=getchar())){
                    count=count*10+ch-'0';
                }
                for(int i=0;i<count;i++){
                    cout<<ch;
                }
            }
        }
    }

    return 0;
}
