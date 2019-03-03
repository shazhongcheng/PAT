#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int N,tianshu;
    double fazhi;
    cin>>N>>fazhi>>tianshu;
    int n;
    int counttianshu,count1=0,count2=0;
    int falg1=0,falg2=0;
    for(int i=0;i<N;i++){
        counttianshu=0;
        falg1=0;
        falg2=0;
        cin>>n;
        double temp;
        for(int j=0;j<n;j++){
            cin >>temp;
            if(temp<fazhi){
                counttianshu++;
            }
        }
        if(counttianshu>(n/2) && n>tianshu){
            count2++;
        }else if(counttianshu>(n/2)){
            count1++;
        }
    }
    printf("%.1lf%% %.1lf%%",(count1*100.0)/N,(count2*100.0)/N);

    return 0;
}
