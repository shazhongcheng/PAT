#include <iostream>
#include<cctype>
#include<string>
using namespace std;
int main(){
    string s1,s2,ans;
    cin>>s1>>s2;
    for(int i=0;i<s1.length();i++){
        //If no matches were found, the function returns string::npos.
        if(s2.find(s1[i])==string::npos&&ans.find(toupper(s1[i]))==string::npos){
            ans+=toupper(s1[i]);
        }
    }
    cout<<ans;
    return 0;
}

////节点4错误 莫名其妙
//
//#include <iostream>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//    int mark[255];
//    memset(mark,0,255*sizeof(int));
//    char s1[85],s2[85];
//    cin>>s1>>s2;
//    int i=0,j=0;
//    while(s1[i]&&s2[j]){
//        if(s1[i]==s2[j]){
//            i++;
//            j++;
//        }else{
//            if(s1[i]>='a' && s1[i]<='z'){
//                if(mark[s1[i]-'a'+'A']==0){
//                    cout<<(char)(s1[i]-'a'+'A');
//                    mark[s1[i]-'a'+'A']=1;
//                }
//            }else{
//                if(mark[s1[i]]==0){
//                    cout<<s1[i];
//                    mark[s1[i]]=1;
//                }
//            }
//            i++;
//        }
//    }
//    return 0;
//}
