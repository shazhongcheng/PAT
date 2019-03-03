#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a,b;
    int acount[3]={0,0,0};
    int bcount[3]={0,0,0};
    int res[3]={0,0,0};
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a=='C'){
            if(b=='C'){
//                acount[0]++;
//                bcount[0]++;
                res[2]++;
            }else if(b=='J'){
                acount[0]++;
//                bcount[1]++;
                res[0]++;
            }else if(b=='B'){
//                acount[0]++;
                bcount[2]++;
                res[1]++;
            }
        }else if(a=='J'){
            if(b=='C'){
//                acount[1]++;
                bcount[0]++;
                res[1]++;
            }else if(b=='J'){
//                acount[1]++;
//                bcount[1]++;
                res[2]++;
            }else if(b=='B'){
                acount[1]++;
//                bcount[2]++;
                res[0]++;
            }
        }else if(a=='B'){
            if(b=='C'){
                acount[2]++;
//                bcount[0]++;
                res[0]++;
            }else if(b=='J'){
//                acount[2]++;
                bcount[1]++;
                res[1]++;
            }else if(b=='B'){
//                acount[2]++;
//                bcount[2]++;
                res[2]++;
            }
        }
    }
    cout<<res[0]<<" "<<res[2]<<" "<<res[1]<<endl;
    cout<<res[1]<<" "<<res[2]<<" "<<res[0]<<endl;

    char stra[4]="CJB";
    if(acount[2]>=acount[0]){
        if(acount[2]>=acount[1]){
            printf("%c",stra[2]);
        }else{
            printf("%c",stra[1]);
        }
    }else if(acount[0]>=acount[1]){
        printf("%c",stra[0]);
    }else{
        printf("%c",stra[1]);
    }
    printf(" ");
    if(bcount[2]>=bcount[0]){
        if(bcount[2]>=bcount[1]){
            printf("%c",stra[2]);
        }else{
            printf("%c",stra[1]);
        }
    }else if(bcount[0]>=bcount[1]){
        printf("%c",stra[0]);
    }else{
        printf("%c",stra[1]);
    }

    return 0;
}
