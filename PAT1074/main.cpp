#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    int i=str1.length()-1;
    int j=str2.length()-1;
    int k=str3.length()-1;
    string res="";
    int temp1=0;
    int temp2=0;
    int count=0;
    for(;;){
        if(j<0 && k<0){
            break;
        }
        if(j>=0 && k>=0){
//            cout<<str2[j]<<" "<<str3[k]<<endl;
            temp1=str2[j]-'0'+str3[k]-'0'+temp2;
            j--;
            k--;
        }else if(j>=0){
            temp1=str2[j]-'0'+temp2;
            j--;
        }else if(k>=0){
            temp1=str3[k]-'0'+temp2;
            k--;
        }
        if(i>=0 &&count<20){
            if(str1[i]=='0'){
                temp2=temp1/10;
                temp1%=10;
            }else{
                temp2=temp1/(str1[i]-'0');
                temp1%=(str1[i]-'0');
            }
            i--;
            count++;
        }else{
            temp2=temp1/10;
            temp1%=10;
        }
        res=(char)(temp1+'0')+res;
    }
    if(temp2>0){
        res=(char)(temp2+'0')+res;
    }
    for(int i=0;i<res.length();){
        if(res[i]=='0'){
            res.erase(0,1);
        }else{
            break;
        }
    }
    if(res.length()==0){
        cout<<"0";
    }else{
        cout<<res;
    }
    return 0;
}
