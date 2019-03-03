#include <iostream>
#include <cstdio>
using namespace std;

struct problem{
    int score; //总分
    int sum; //选项个数
    int anw; //正确答案个数
    string right; //正确选项
};
problem p[105];
int main(){
    int N,M;

    cin>>N>>M;

    for(int i=0;i<M;i++){
        scanf("%d %d %d",&p[i].score,&p[i].sum,&p[i].anw);
        char s;
        for(int j=0;j<p[i].anw;j++){
            cin>>s;
            p[i].right+=s;
        }
    }

    int wrong[M]={0};
    for(int i=0;i<N;i++){
        int sco=0;
        scanf("\n");
        for(int j=0;j<M;j++){
            if(j!=0) scanf(" ");
            string str;
            int k;
            char s;
            scanf("(%d",&k);
            for(int q=0;q<k;q++){
                scanf(" %c",&s);
                str+=s;
            }
            scanf(")");
            if(str==p[j].right) sco+=p[j].score;
            else wrong[j]++;
        }
        printf("%d\n",sco);
    }

    int max=-1;
    for(int i=0;i<M;i++){
        if(max<wrong[i]) max=wrong[i];
    }
    if(max==0) cout<<"Too simple";
    else{
        cout<<max;
        for(int j=0;j<M;j++){
            if(max==wrong[j]) cout<<" "<<j+1;
        }
    }

    return 0;
}

//// 思路受限
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//struct TiMu{
//    int num;
//    int grade;
//    int allAnswer;
//    int rightAnswer;
//    bool choose[5];
//    int right;
//    int wrong;
//};
//
//int main()
//{
//    TiMu t[200];
//    int N,M;
//    cin>>N>>M;
//    int grade=0;
//    int allAnswer=0;
//    int rightAnswer=0;
//    char temp;
//    for(int i=0;i<M;i++){
//        cin>>grade>>allAnswer>>rightAnswer;
//        t[i].num=i+1;
//        t[i].grade=grade;
//        t[i].allAnswer=allAnswer;
//        t[i].rightAnswer=rightAnswer;
//        for(int j=0;j<5;j++){
//            t[i].choose[j]=false;
//        }
//        for(int j=0;i<rightAnswer;j++){
//            cin>>temp;
//            t[i].choose[int(temp-'a')]=true;
//        }
//        t[i].right=0;
//        t[i].wrong=0;
//    }
//    string str;
//    int stuGrade[1005]={0};
//    for(int i=0;i<N;i++){
//        getline(cin,str);
//        int k=0;
//        int falg=1;
//        for(int j=0;j<str.length();j++){
//            if(flag && str[j]==')'){
//                stuGrade[i]+=t[k].grade;
//                t[k].right++;
//                k++;
//                falg=1;
//            }
//            if(!flag && str[j]==')'){
//                t[k].wrong++;
//                k++;
//                falg=1;
//            }
//
//        }
//
//    }
//    return 0;
//}
