#include <iostream>
#include <algorithm>
#include<cstdio>
using namespace std;

int main()
{

    int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }

    for(int i=1;i<10;i++){
        if(a[i]>0){
            printf("%d",i);
            a[i]--;
            break;
        }


    }

    for(int i=0;i<10;i++){
        while(a[i]>0){
            printf("%d",i);
            a[i]--;
        }
    }



    return 0;
}
