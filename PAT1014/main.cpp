#include <iostream>
#include <stdio.h>

using namespace std;



int main()
{
    char s1[65];
    char s2[65];
    char s3[65];
    char s4[65];

    scanf("%s %s %s %s",s1,s2,s3,s4);
    int pos=0;
    char mark1,mark2;
    int mark3;
    while(s1[pos]&&s2[pos]){
        if(s1[pos]==s2[pos]){
            if(s1[pos]>='A' && s1[pos]<='G'){
                mark1=s1[pos];
                pos++;
                break;
            }
        }
        pos++;
    }
    while(s1[pos]&&s2[pos]){
        if(s1[pos]==s2[pos]){
            if((s1[pos]>='A' && s1[pos]<='N') || (s1[pos]>='0' && s1[pos]<='9')){
                mark2=s1[pos];
                pos++;
                break;
            }
        }
        pos++;
    }
    pos=0;
    while(s3[pos]&&s4[pos]){
        if(s3[pos]==s4[pos]){
            if((s3[pos]>='A' && s3[pos]<='Z') || (s3[pos]>='a' && s3[pos]<='z')){
                mark3=pos;
                break;
            }
        }
        pos++;
    }
    //cout<<mark1<<" "<<mark2<<" "<<mark3;
    char day[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    printf("%s",day[mark1-'A']);
    if(mark2>='0'&&mark2<='9')
        printf(" %02d",mark2-'0');
    else if(mark2>='A'&&mark2<='N')
        printf(" %02d",mark2-'A'+10);
    printf(":%02d",mark3);
    return 0;
}
