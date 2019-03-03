#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int m,x,y;
void print(double t){
	if(m==t) printf(" Ping");
	else if(m<t) printf(" Cong");
	else printf(" Gai");
}

int main(){
	cin>>m>>x>>y;
	for(int i=99;i>=10;i--){
		int j=(i%10*10+i/10);
		int d=abs(i-j);
		if(j*x==d*y){
			printf("%d",i);
			print(i);print(j);print(j*1.0/y);
			return 0;
		}
	}
	cout<<"No Solution";
	return 0;

}
