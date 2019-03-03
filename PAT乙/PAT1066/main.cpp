#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int M,N,low,high,rep;
    cin>>M>>N>>low>>high>>rep;
    int temp;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            scanf("%d",&temp);
            if((temp>=low && temp<=high)){
                temp=rep;
            }
            if(j!=0){
                printf(" ");
            }
            printf("%03d",temp);
        }
        printf("\n");
    }



    return 0;
}
