#include <iostream>

using namespace std;

int main()
{
    int n;
    char str[19];
    char res[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    cin>>n;
    int flag=0;
    for(int j=0;j<n;j++){
        int count=0;
        cin>>str;
        int mark=0;
        for(int i=0;i<17;i++){
            if(str[i]>='0'&&str[i]<='9'){
                count+=(str[i]-'0')*weight[i];
            }else{
                mark=1;
                break;
            }
        }
        if(mark==1){
            cout<<str<<endl;
            flag=1;
        }else{
            if(str[17]==res[count%11]){
                continue;
            }else{
                cout<<str<<endl;
                flag=1;
            }
        }
    }
    if(flag==0){
        cout<<"All passed"<<endl;
    }
    return 0;
}
