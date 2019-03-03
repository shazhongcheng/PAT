#include <iostream>
#include<cstdio>
using namespace std;
#define CLK_TCK 100
int main()
{
    int c1,c2;
    cin>>c1>>c2;
    int c = (c2-c1+50)/CLK_TCK;

    int s=c%60;
    c/=60;
    int m=c%60;
    c/=60;
    int h=c;

    printf("%02d:%02d:%02d\n",h,m,s);

    return 0;
}
