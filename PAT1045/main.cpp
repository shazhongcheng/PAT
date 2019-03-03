//节点2 3 5 错误
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num1[100005];
    int num2[100005];
    int res[100005];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num1[i];
        num2[i]=num1[i];
    }
    sort(num2,num2+n);
    int count=0;
    int max=0;
    for(int i=0;i<n;i++){
//        if(i==0&&num1[i]==num2[i]){
//            res[count]=num2[i];
//            count++;
//        }else if(i>0&&num1[i]==num2[i]&&num2[i]>num2[i-1]){
//            res[count]=num2[i];
//            count++;
//        }
        //找未排序数列里面的前最大值 解决节点3 5 错误
        if(num1[i]>max){
            max=num1[i];
        }
        if(max==num1[i]&&num1[i]==num2[i])
            res[count++]=num1[i];
    }
    cout<<count<<endl;
//    sort(res,res+count);
    for(int i=0;i<count;i++){
        if(i==0){
            cout<<res[i];
        }else{
            cout<<" "<<res[i];
        }
    }
    //解决节点2错误
    cout<<endl;
    return 0;
}
