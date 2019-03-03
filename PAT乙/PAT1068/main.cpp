#include <cstdio>
#include <iostream>
#include <cstring>
#include <map>
#include <cmath>
using namespace std;

map<int,int> vis;
int s[1001][1001];
int n,m,tol;
int dir[8][2]={{1,0},
               {-1,0},
               {0,1},
               {0,-1},
               {1,1},
               {1,-1},
               {-1,1},
               {-1,-1}};

bool check(int x,int y){
    for(int i=0;i<8;i++){
        int xx=x+dir[i][0];
        int yy=y+dir[i][1];
        if(xx>=0 && xx<n && yy<m && yy>=0 && abs(s[xx][yy]-s[x][y])<=tol) return false;
    }
    return true;
}
int main(){
    cin>>m>>n>>tol;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>s[i][j];
            // map的使用！
            vis[s[i][j]]++;
        }
    }
    int cnt=0;
    int x,y;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[s[i][j]]==1 && check(i,j)){
                cnt++;
                x=i;
                y=j;
            }
        }
    }

    if(cnt==1){
        printf("(%d, %d): %d",y+1,x+1,s[x][y]);
    }else if(cnt>1){
        printf("Not Unique");
    }else{
        printf("Not Exist");
    }

}


//// 理解错误 只出现一次的
//#include <iostream>
//#include <cmath>
//#include <stdio.h>
//using namespace std;
//int tu[1005][1005];
//int main()
//{
//    int M,N,fa,count=0;
//    cin>>M>>N>>fa;
//    for(int i=0;i<N;i++){
//        for(int j=0;j<M;j++){
//            cin>>tu[i][j];
//        }
//    }
//    int r,c;
//    for(int i=1;i<N-1;i++){
//        for(int j=1;j<M-1;j++){
//            if(abs(tu[i][j]-tu[i-1][j])>fa
//               &&abs(tu[i][j]-tu[i][j-1])>fa
//               &&abs(tu[i][j]-tu[i-1][j-1])>fa
//               &&abs(tu[i][j]-tu[i+1][j])>fa
//               &&abs(tu[i][j]-tu[i][j+1])>fa
//               &&abs(tu[i][j]-tu[i+1][j+1])>fa
//               &&abs(tu[i][j]-tu[i-1][j+1])>fa
//               &&abs(tu[i][j]-tu[i+1][j-1])>fa)
//                count++;
//                if(count>1){
//                    cout<<"Not Unique"<<endl;
//                    return 0;
//                }
//                r=i;
//                c=j;
//        }
//    }
//    printf("(%d, %d): %d",c+1,r+1,tu[r][c]);
//    return 0;
//}
