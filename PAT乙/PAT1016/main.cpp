#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char sa[20],sb[20];
    int a,b;
    cin>>sa>>a>>sb>>b;
    int lena,lenb;
    lena = strlen(sa);
    lenb = strlen(sb);
    int resa=0,resb=0;
    for(int i=0;i<lena;i++){
//        cout<<(sa[i]-'0'==a);
        if(sa[i]-'0'==a){
            resa=resa*10+a;
        }
    }

    for(int i=0;i<lenb;i++){
        if(sb[i]-'0'==b){
            resb=resb*10+b;
        }
    }

//    cout<<resa<<" "<<resb<<" "<<resa+resb<<endl;

    cout<<resa+resb<<endl;
    return 0;
}
