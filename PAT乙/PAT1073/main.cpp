#include <iostream>
#include <cstdio>
using namespace std;

struct Ques{
    int qscore;  //满分
    int qsnum;   //选项个数
    int qrnum;   //正确选项个数
    int qawr[128]; //所有正确选项
};
#define LEN 120
int main()
{
    int snum; //学生人数
    int qnum; //题目个数
    Ques ques[LEN]; //每道题信息
    int wrong[LEN][128]={0}; //错误信息矩阵
    int wmax=0; //最大错误次数
    char ch;
    int i;
    int j;
    int k;

    cin>>snum>>qnum;
    for(i=1;i<=qnum;i++){
        ques[i].qawr['a']=0;
        ques[i].qawr['b']=0;
        ques[i].qawr['c']=0;
        ques[i].qawr['d']=0;
        ques[i].qawr['e']=0;
        cin>>ques[i].qscore>>ques[i].qsnum>>ques[i].qrnum;
        for(j=1;j<=ques[i].qrnum;j++){
            cin>>ch;
            ques[i].qawr[(int)(ch)]=1;
        }
    }
    getchar();
    int len;//初始题目
    int mys;//学生选了几个
    char slt;//选中的选项
    for(i=1;i<=snum;i++){
        double score=0;
        len=1;
        while((ch=getchar())!='\n'){
            if(ch=='('){
                int cawr[128]={0};
                cin>>mys;
                for(j=1;j<=mys;j++){
                    cin>>slt;
                    cawr[(int)slt]=1;
                }
                for(k='a';k<='e';k++){
                    if(cawr[k]!=ques[len].qawr[k]) wrong[len][k]++;
                    if(wrong[len][k]>wmax) wmax=wrong[len][k];
                }
                if(cawr['a']==ques[len].qawr['a']&&
                   cawr['b']==ques[len].qawr['b']&&
                   cawr['c']==ques[len].qawr['c']&&
                   cawr['d']==ques[len].qawr['d']&&
                   cawr['e']==ques[len].qawr['e']
                   ){
                    score+=(double)(ques[len].qscore);
                   }
                else if(
                    (cawr['a']==1&&ques[len].qawr['a']==0) ||
                    (cawr['b']==1&&ques[len].qawr['b']==0) ||
                    (cawr['c']==1&&ques[len].qawr['c']==0) ||
                    (cawr['d']==1&&ques[len].qawr['d']==0) ||
                    (cawr['e']==1&&ques[len].qawr['e']==0)
                    ){
                    }
                else{
                    score+=(double)(ques[len].qscore)/2.0;
                }
                len++;
            }
        }
        printf("%.1lf\n",score);
    }
    if(wmax==0){
        printf("Too simple\n");
    }else{
        for(i=1;i<=qnum;i++){
            for(j='a';j<='e';j++){
                if(wrong[i][j]==wmax){
                    printf("%d %d-%c\n",wrong[i][j],i,j);
                }
            }
        }
    }
    return 0;
}
