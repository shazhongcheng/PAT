
// 因为数据类型不统一 导致测试点2出错
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct YueBing{
    double dun;
    double money;
};

int comp(YueBing y1,YueBing y2){
    if((y1.money/y1.dun)>(y2.money/y2.dun)){
        return true;
    }else{
        return false;
    }
}

int main()
{
    YueBing yb[1005];
    int N;double need;
    double gain=0;
    cin>>N>>need;
    for(int i=0;i<N;i++){
        cin>>yb[i].dun;
    }
    for(int i=0;i<N;i++){
        cin>>yb[i].money;
    }

    sort(yb,yb+N,comp);

//    for(int i=0;i<N;i++){
//        cout<<yb[i].dun<<" "<<yb[i].money<<endl;
//    }
    double sum=0;
    for(int i=0;i<N;i++){
        sum+=yb[i].dun;
        if(sum>=need){
            gain+=(yb[i].dun-(sum-need))/yb[i].dun*yb[i].money;
            break;
        }else{
            gain+=yb[i].money;
        }
    }
    printf("%.2lf",gain);
    return 0;
}
