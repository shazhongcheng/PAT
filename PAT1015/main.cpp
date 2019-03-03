//#include <iostream>
//#include <stdio.h>
////L（≥60），为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；
////H（<100），为优先录取线——德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；
////才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；
////德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；
////其他达到最低线 L 的考生也按总分排序，但排在第三类考生之后。
////考生按输入中说明的规则从高到低排序。当某类考生中有多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。
//using namespace std;
//
////插入排序测试
//
//typedef struct Student{
//    int  num;
//    int deScore;
//    int caiScore;
//}Stu;
//
//Stu stu1[100000];
//Stu stu2[100000];
//Stu stu3[100000];
//Stu stu4[100000];
//
//void mysort(Stu *stu,int end,Stu add){
//    int j=end-1;
//    for(;j>=0;j--){
//        if((stu[j].caiScore+stu[j].deScore) < (add.caiScore+add.deScore)){
//            stu[j+1]=stu[j];
//        }else if((stu[j].caiScore+stu[j].deScore) == (add.caiScore+add.deScore) && (stu[j].deScore<add.deScore)){
//            stu[j+1]=stu[j];
//        }else if((stu[j].caiScore+stu[j].deScore) == (add.caiScore+add.deScore) && (stu[j].deScore == add.deScore) && (stu[j].num>add.num)){
//            stu[j+1]=stu[j];
//        }else{
//            break;
//        }
//    }
//    stu[j+1].num=add.num;
//    stu[j+1].deScore=add.deScore;
//    stu[j+1].caiScore=add.caiScore;
//}
//
//void print(Stu *stu,int end){
//    for(int i=0;i<end;i++){
//        printf("%d %d %d\n",stu[i].num,stu[i].deScore,stu[i].caiScore);
//    }
//}
//
//int main()
//{
//    int N,L,H;
//    int count1=0,count2=0,count3=0,count4=0;
//    Stu temp;
//    cin>>N>>L>>H;
//    for(int i=0;i<N;i++){
//        scanf("%d %d %d",&temp.num,&temp.deScore,&temp.caiScore);
//        if(temp.deScore<L || temp.caiScore<L){
//            continue;
//        }else if(temp.deScore>=H && temp.caiScore>=H){
//            mysort(stu1,count1,temp);
//            count1++;
//        }else if(temp.deScore>=H){
//            mysort(stu2,count2,temp);
//            count2++;
//        }else if(temp.deScore >= temp.caiScore){
//            mysort(stu3,count2,temp);
//            count3++;
//        }else{
//            mysort(stu4,count4,temp);
//            count4++;
//        }
//    }
//    printf("%d\n",count1+count2+count3+count4);
//    print(stu1,count1);
//    print(stu2,count2);
//    print(stu3,count3);
//    print(stu4,count4);
//    return 0;
//}

#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;
struct info{
    char num[10];
    int de_s,cai_s,sum;
    int clas;
}stu[100010];

bool cmp(info a,info b){
    if(a.clas != b.clas) return a.clas<b.clas;
    else if(a.sum!=b.sum) return a.sum>b.sum;
    else if(a.de_s!=b.de_s) return a.de_s>b.de_s;
    else return strcmp(a.num,b.num)<0;
}

int main(){
    int N,L,H;
    scanf("%d %d %d",&N,&L,&H);
    int cnt=N;
    for(int i=0;i<N;i++){
        scanf("%s %d %d",stu[i].num,&stu[i].de_s,&stu[i].cai_s);
        stu[i].sum=stu[i].de_s+stu[i].cai_s;
        if(stu[i].de_s<L||stu[i].cai_s<L){
            stu[i].clas=5;
            cnt--;
        }
        else if(stu[i].de_s>=H && stu[i].cai_s>=H) stu[i].clas=1;
        else if(stu[i].de_s>=H && stu[i].cai_s<H) stu[i].clas=2;
        else if(stu[i].de_s >= stu[i].cai_s) stu[i].clas=3;
        else stu[i].clas=4;
    }
    sort(stu,stu+N,cmp);
    printf("%d\n",cnt);
    for(int i=0;i<cnt;i++){
        printf("%s %d %d\n",stu[i].num,stu[i].de_s,stu[i].cai_s);
    }
    return 0;

}
