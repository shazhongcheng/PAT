#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s1[1005];
    char s2[1005];
    int key1[255];
    memset(key1,0,sizeof(key1));
    cin>>s1>>s2;
    int len1=strlen(s1);
    int len2=strlen(s2);
    for(int i=0;s1[i];i++){
        key1[s1[i]]++;
    }
    for(int i=0;s2[i];i++){
        if(key1[s2[i]]){
            key1[s2[i]]--;
            len1--;
            len2--;
        }
    }
    if(len2==0){
        cout<<"Yes "<<len1;
    }else{
        cout<<"No "<<len2;
    }
    return 0;
}
