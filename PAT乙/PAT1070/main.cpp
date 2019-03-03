#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

    int N;
    cin>>N;
    int num[N];
    for(int i=0;i<N;i++){
        cin>>num[i];
    }
    sort(num,num+N);
    double length=num[0];
    for(int i=1;i<N;i++){
        length=(length+num[i])/2;
    }
    cout<<floor(length);

    return 0;
}
