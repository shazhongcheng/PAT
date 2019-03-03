#include <iostream>

using namespace std;

int main()
{
    string str;
    int mark[6]={0,0,0,0,0,0};
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        switch(str[i]){
            case 'P':mark[0]++;break;
            case 'A':mark[1]++;break;
            case 'T':mark[2]++;break;
            case 'e':mark[3]++;break;
            case 's':mark[4]++;break;
            case 't':mark[5]++;break;
            default:
                continue;
        }
    }
    for(;;){
        int flag=0;
        if(mark[0]){
            cout<<'P';
            mark[0]--;
            flag=1;
        }
        if(mark[1]){
            cout<<'A';
            mark[1]--;
            flag=1;
        }
        if(mark[2]){
            cout<<'T';
            mark[2]--;
            flag=1;
        }
        if(mark[3]){
            cout<<'e';
            mark[3]--;
            flag=1;
        }
        if(mark[4]){
            cout<<'s';
            mark[4]--;
            flag=1;
        }
        if(mark[5]){
            cout<<'t';
            mark[5]--;
            flag=1;
        }
        if(!flag){
            break;
        }
    }
    return 0;
}
