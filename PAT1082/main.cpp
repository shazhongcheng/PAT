#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

struct peo{
    string name;
    double count;
};

int cmp(peo p1,peo p2){
    return p1.count!=p2.count?p1.count>p2.count : p1.name<p2.name;
}

int main()
{
    peo p[10006];
    int n;
    cin>>n;
    double x1,x2;
    for(int i=0;i<n;i++){
        cin>>p[i].name>>x1>>x2;
        p[i].count=sqrt(x1*x1+x2*x2);
    }
    sort(p,p+n,cmp);
    cout<<p[n-1].name<<" "<<p[0].name;
    return 0;
}
