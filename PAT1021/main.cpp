#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

int main()
{

    int a[10];
    memset(a,0,10*sizeof(int));
    char str[1005];
    scanf("%s",str);

    for(int i=0;str[i]!=0;i++){
        a[str[i]-'0']++;
    }

    for(int i=0;i<10;i++){
        if(a[i]>0){
            printf("%d:%d\n",i,a[i]);
        }
    }

    return 0;
}
