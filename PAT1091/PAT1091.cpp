#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		int flag=0;
		for(int i=1;i<10;i++){
			int res=i*temp*temp;
			int jie=10;
			while(temp>res%jie){
				jie*=10;
			}
			if(temp==res%jie){
				cout<<i<<" "<<res<<endl;
				flag=1;
				break;
			}
		}
		if(!flag){
			cout<<"No"<<endl;
		}
	}
}
