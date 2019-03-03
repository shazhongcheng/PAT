//输入首先给出两个正整数 N（≤1000）和 M（≤100），
//分别为月饼的种类数（于是默认月饼种类从 1 到 N 编号）和参与统计的城市数量。
//接下来 M 行，每行给出 N 个非负整数（均不超过 1 百万），其中第 i 个整数为第 i 种月饼的销量（块）。数字间以空格分隔。
//5 3 N(种类) M(个城市) 
//1001 992 0 233 6
//8 0 2018 0 2008
//36 18 0 1024 4

#include<iostream>
using namespace std;

int main(){
	int num[1005]={0},max=-1;
	int N,M;
	cin>>N>>M;
	for(int i=0;i<M;i++){
		for(int j=1;j<=N;j++){
			int temp;
			cin>>temp;
			num[j]+=temp;
			if(max<num[j]){
				max=num[j];
			}
		}
	} 
	cout<<max<<endl;
	int flag=0;
	for(int i=1;i<=N;i++){
		if(num[i]==max){
			if(!flag){
				cout<<i;
				flag=1;
			}else{
				cout<<" "<<i;
			}
		}
	}
	return 0;
} 
