#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    double t;
    int sum;
    int temp;
    vector<int> v;
    for(int i=0;i<N;i++){
        cin>>t;
        sum=0;
        for(int j=1;j<N;j++){
            cin>>temp;
            if(temp<=M && temp>=0){
                v.push_back(temp);
            }
        }
        int min,max;
        min=max=0;
        for(int i=1;i<v.size();i++){
            if(v[i]>v[max]){
                max=i;
            }
            if(v[i]<v[min]){
                min=i;
            }
        }
        for(int j=0;j<v.size();j++){
            if(j==max || j==min){
                continue;
            }
            sum+=v[j];
        }
        printf("%.0lf\n",(t+sum/(v.size()-2)+0.5)/2.0);
        v.clear();
    }
    return 0;
}
