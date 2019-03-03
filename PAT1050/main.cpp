#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[10000][1000]={0},s[10000];

bool cmp(int a,int b){
    return a>b;
}

int main(){
    int n,minn=9999,r,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n,cmp);
//    要求矩阵的规模为 m 行 n 列，满足条件：m×n 等于 N；m≥n；且 m−n 取所有可能值中的最小值。
//    节点 2 4 6 错误
//    for(int i=1;i<sqrt(n);i++){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(n/i-i<minn){
                minn=n/i-i;
                r=i;
            }
        }
    }
    c=n/r;
    a[1][1]=s[0];
    int tot=0;
    int x,y;
    x=y=1;
//    从左上角第 1 个格子开始，按顺时针螺旋方向填充
    while(tot<r*c-1){
        while(y+1<=r && !a[x][y+1]){
            a[x][++y]=s[++tot];
        }
        while(x+1<=c && !a[x+1][y]){
            a[++x][y]=s[++tot];
        }
        while(y-1>0 && !a[x][y-1]){
            a[x][--y]=s[++tot];
        }
        while(x-1>0 && !a[x-1][y]){
            a[--x][y]=s[++tot];
        }

    }
    for(int i=1;i<=c;i++){
        cout<<a[i][1];
        for(int j=2;j<=r;j++){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}


////搞不定了
//#include <iostream>
//#include <malloc.h>
//#include <algorithm>
//using namespace std;
//
//int cmp(int a,int b){
//    if(a>=b){
//        return true;
//    }else{
//        return false;
//    }
//}
//
//int main()
//{
//
//    int n;
//    cin>>n;
//    int *res=(int *)malloc(sizeof(int)*((n+1)*(n+1)));
//
//    int *num=(int *)malloc(sizeof(int)*n);
//    for(int i=0;i<n;i++){
//        cin>>num[i];
//    }
//    sort(num,num+n,cmp);
//////    打印测试
////    for(int i=0;i<n;i++){
////        cout<<num[i]<<" ";
////    }
//
//    for(int i=0;i<n;i++)
//
//    return 0;
//}
