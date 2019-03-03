#include <stdio.h>

int main(){
    int N,m[5];
    char c,symbols[3][10][5]={0};

    for(int symbol=0;symbol<3;symbol++){
        for(int index=0;(c=getchar())!='\n';)
//        格式化字符串"%[^...]"，这种字符串的作用类似于"%s"，但是后者会读取字符串到空白字符（
//        空格、换行、制表符等等），前者使scanf读到^后面的字符，相当于用户可以自定义scanf的行为。
            if(c=='['){
                scanf("%[^]]",symbols[symbol][index++]);
//                printf("%s\n",symbols[symbol][index-1]);
            }
    }
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        for(int i=0;i<5;i++) scanf("%d",m+i);
        if(m[0]>0 && m[0]<=10 && *symbols[0][--m[0]]
        && m[1]>0 && m[1]<=10 && *symbols[1][--m[1]]
        && m[2]>0 && m[2]<=10 && *symbols[2][--m[2]]
        && m[3]>0 && m[3]<=10 && *symbols[1][--m[3]]
        && m[4]>0 && m[4]<=10 && *symbols[0][--m[4]])
            printf("%s(%s%s%s)%s\n",symbols[0][m[0]],
                                  symbols[1][m[1]],
                                  symbols[2][m[2]],
                                  symbols[1][m[3]],
                                  symbols[0][m[4]]);
        else
            // puts（）在输出字符串时会将’\0’自动转换成’\n’进行输出，也就是说，puts方法输出完字符串后会自动换行。
            puts("Are you kidding me? @\\/@");
    }
    return 0;
}


//// 有字符显示问题
//#include <iostream>
//#include <string>
//#include <vector>
//#include <cstdio>
//using namespace std;
//
//int main()
//{
//    string str[3];
//    vector<string> v[3];
//    getline(cin,str[0]);
//    getline(cin,str[1]);
//    getline(cin,str[2]);
//    string temp;
//    for(int k=0;k<3;k++){
//        for(int i=0;i<str[k].length();i++){
//            temp="";
//            if(str[k][i]=='['){
//                i++;
//                while(str[k][i]!=']'){
//                    temp+=str[k][i];
//                    i++;
//                }
//                v[k].push_back(temp);
//                cout<<temp<<endl;
//            }
//        }
//    }
//    int n;
//    cin>>n;
//    int a[5];
//    for(int k=0;k<n;k++){
//        int flag=0;
//        for(int i=0;i<5;i++){
//            cin>>a[i];
//        }
//        if(a[0]>v[0].size() || a[1]>v[1].size() || a[2]>v[2].size() || a[3]>v[1].size() || a[4]>v[0].size()){
//            flag=1;
//        }
//        if(!flag){
//            printf("%s(%s%s%s)%s",v[0][a[0]-1],v[1][a[1]-1],v[2][a[2]-1],v[1][a[3]-1],v[0][a[4]-1]);
//        }else{
//            cout<<"Are you kidding me? @\/@";
//        }
//    }
//
//
//    return 0;
//}
