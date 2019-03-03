#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int tol,N;
    cin>>tol>>N;
    int n1, b, t, n2;
    for(int i=0;i<N;i++){
        cin>>n1>>b>>t>>n2;
        if(t>tol){
            printf("Not enough tokens.  Total = %d.\n",tol);
            continue;
        }
        if((b==1&&n2>n1)||(b==0&&n1>n2)){
            tol+=t;
            printf("Win %d!  Total = %d.\n",t,tol);
        }else if((b==1&&n2<n1)||(b==0&&n1<n2)){
            tol-=t;
            printf("Lose %d.  Total = %d.\n",t,tol);
        }
        if(tol<=0){
            printf("Game Over.\n");
            break;
        }
    }
    return 0;
}
