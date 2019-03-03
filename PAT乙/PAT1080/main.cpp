/*
P（做了在线编程作业的学生数）、M（参加了期中考试的学生数）、N（参加了期末考试的学生数）
6 6 7
第一块包含 P 个在线编程成绩 G​p
​01234 880
a1903 199
ydjh2 200
wehu8 300
dx86w 220
missing 400
第二块包含 M 个期中考试成绩 Gmid−term
ydhfu77 99
wehu8 55
ydjh2 98
dx86w 88
a1903 86
01234 39
第三块包含 N 个期末考试成绩 Gfinal
ydhfu77 88
a1903 66
01234 58
wehu8 84
ydjh2 82
missing 99
dx86w 81

学生学号 Gp G​mid−term Gfinal G
总评成绩的计算公式为 G=(Gmid−term×40%+Gfinal×60%)，如果 G​mid−term>Gfinal；否则总评 G 就是 Gfinal
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cstdio>
using namespace std;

struct node{
    string name;
    int gp,gm,gf,g;
};

map<string,int>idx;
bool cmp(node a,node b){
    return a.g!=b.g ? a.g>b.g : a.name <b.name;
}
int main()
{
    int p,m,n,score,cnt=1;
    cin>>p>>m>>n;
    vector<node>v,ans;
    string s;
    for(int i=0;i<p;i++){
        cin>>s>>score;
        if(score>=200){
            v.push_back(node{s,score,-1,-1,0});
            //map的使用
            idx[s]=cnt++;
        }
    }
    for(int i=0;i<m;i++){
        cin>>s>>score;
        if(idx[s]!=0) v[idx[s]-1].gm=score;
    }
    for(int i=0;i<n;i++){
        cin>>s>>score;
        if(idx[s]!=0){
            int temp=idx[s]-1;
            v[temp].gf=v[temp].g=score;
            if(v[temp].gm>v[temp].gf) v[temp].g=int(v[temp].gm*0.4+v[temp].gf*0.6+0.5);
        }
    }

    for(int i=0;i<v.size();i++){
        if(v[i].g>=60) ans.push_back(v[i]);
    }
    sort(ans.begin(),ans.end(),cmp);
    for(int i=0;i<ans.size();i++){
        printf("%s %d %d %d %d\n",ans[i].name.c_str(),ans[i].gp,ans[i].gm,ans[i].gf,ans[i].g);
    }

    return 0;
}
