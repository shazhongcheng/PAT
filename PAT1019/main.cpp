#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

bool comp(char m,char n){
    if(m>n){
        return true;
    }else{
        return false;
    }
}

void int2str(const int &int_temp,string &string_temp)
{
        stringstream stream;
        stream<<int_temp;
        string_temp=stream.str();
}

int main(){

    string a,b,c;
    cin>>c;
    c.insert(0,4-c.length(),'0');
    while(true){
        a=c;
        b=c;
        sort(a.begin(),a.end(),comp);
        sort(b.begin(),b.end());
        int x = atoi(a.c_str());
        int y = atoi(b.c_str());
        int z = x-y;
        printf("%04d - %04d = %04d\n",x,y,z);
        if(z==0||z==6174){
            break;
        }
        int2str(z,c);
        c.insert(0,4-c.length(),'0');
    }
    return 0;
}

/**  error 节点5 过不去 不知道为什么

#include <stdio.h>
void rank(int a[],int n) {
	int temp,i,j;
	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++)
			if(a[i]>a[j]) {
				temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
};

int main() {
	int a[4],sz1=0,sz2=0,sz=1,temp;
	scanf("%d",&sz);
	a[0]=sz%10;
    a[1]=(sz/10)%10;
    a[2]=(sz/100)%10;
    a[3]=(sz/1000);
    if(a[1]==a[2]&&a[2]==a[3]&&a[3]==a[0]){
        printf("%04d - %04d = %04d\n",sz,sz,0);
    }else{
        while(sz!=6174)
        {

            rank(a,4);
            for(int i=3; i>=0; i--)
                sz1=sz1*10+a[i];  //求大的数字
            for(int i=0; i<4; i++)
                sz2=sz2*10+a[i];  //求小的数字
            sz=sz1-sz2;
            printf("%04d - %04d = %04d\n",sz1,sz2,sz);
            a[0]=sz%10;
            a[1]=(sz/10)%10;
            a[2]=(sz/100)%10;
            a[3]=(sz/1000);
            sz1=0;
            sz2=0;
        }
    }



	return 0;
}

**/
