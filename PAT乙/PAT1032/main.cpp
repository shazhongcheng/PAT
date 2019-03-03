#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int n,min=0,temp,max=-1,g;
    int flag=0;
    int grade[100005];
    memset(grade,0,sizeof(int)*100005);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp>min){
            min=temp;
        }
        cin>>g;
        grade[temp]+=g;
        if(flag==0){
            max=temp;
            flag=1;
        }else{
            if(grade[temp]>grade[max]){
                max=temp;
            }
        }
    }
    cout<<max<<" "<<grade[max]<<endl;
    return 0;
}
