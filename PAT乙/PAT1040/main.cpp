#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    char str[100005];
    int mark[100005];
    memset(mark,0,sizeof(int)*100005);
    cin>>str;
    int len=strlen(str);
    int countA=0,countT=0,countP=0;
    for(int i=len-1;i>=0;i--){
        if(str[i]=='P'){
            countP+=countA;
        }
        if(str[i]=='A'){
            countA+=countT;
        }
        if(str[i]=='T'){
            countT++;
        }
        if(countP>=1000000007){
            countP%=1000000007;
        }
    }
    cout<<countP;
    return 0;
}
