#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX_SIZE 100000
using namespace std;
int a[MAX_SIZE];

void init(){
    int count=1;
    for(int i=3;count<MAX_SIZE;i+=2){
        int sqrtn=sqrt(i);
        int j;
        for(j=0;a[j]<=sqrtn;j++){
            if(i%a[j]==0){
                break;
            }
        }
        if(a[j]>sqrtn){
            a[count]=i;
            count++;
        }
    }
}

int main()
{
    a[0]=2;
    //memset(a,0,MAX_SIZE)
    init();
    int begin,end;
    cin>>begin>>end;
    int count=1;
    for(int i=begin;i<=end;i++){
        if(count%11==0){
            count=1;
            printf("\n");
        }
        if(count==1)
            printf("%d",a[i-1]);
        else
            printf(" %d",a[i-1]);
        count++;
    }
    return 0;
}
