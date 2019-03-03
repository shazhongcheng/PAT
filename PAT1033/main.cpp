#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2;
    //第一行有可能有空格 节点2的错误
    getline(cin, s1);
    cin>>s2;
    for(int i=0;i<s2.length();i++){
        if(s1.find(toupper(s2[i]))==string::npos && (s1.find('+')==string::npos || !isupper(s2[i]))){
            cout<<s2[i];
        }
    }
    return 0;
}


////节点2、3过不去
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int main()
//{
//    char mark[255];
//    memset(mark,0,sizeof(char)*255);
//    char str1[100005];
//    char str2[100005];
//    int flag=0;
//    cin>>str1>>str2;
//    for(int i=0;str1[i];i++){
//        if(str1[i]>='A'&&str1[i]<='Z'){
//            mark[str1[i]]=1;
//            mark[str1[i]-'A'+'a']=1;
//        }else{
//            mark[str1[i]]=1;
//        }
//    }
//    for(int i=0;str2[i];i++){
//        if(str2[i]>'A'&&str2[i]<='Z'){
//            if(!mark['+']){
//                if(!mark[str2[i]])
//                    cout<<str2[i];
//                    flag=1;
//            }
//        }else{
//            if(!mark[str2[i]])
//                cout<<str2[i];
//                flag=1;
//        }
//    }
//    if(!flag){
//        cout<<" "<<endl;
//    }
//    return 0;
//}
