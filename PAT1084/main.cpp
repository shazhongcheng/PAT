#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    int n;
    cin>>a>>n;
    while(--n){
        string ans;
        char c=a[0];
        int cnt=0;
        for(int i=0;i<a.length();i++){
            if(a[i]==c)cnt++;
            else{
                ans+=c;
                ans+=cnt+'0';
                c=a[i];
                cnt=1;
            }
        }
        if(cnt>0){
            ans+=c;
            ans+=cnt+'0';
        }
        a=ans;
//        cout<<a<<endl;
    }
    cout<<a<<endl;
    return 0;

}

////思路受限
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//    string str[45]={""};
//    str[0]="";
//    int num,n;
//    cin>>num>>n;
//    str[1]=num+'0';
//    for(int i=0;i<n;i++){
//        if(i+1==n){
//            cout<<str[i];
//        }
//
//    }
//
//    return 0;
//}
