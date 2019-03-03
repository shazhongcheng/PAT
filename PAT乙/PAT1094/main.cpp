#include <cstdio>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <iostream>
using namespace std;
int isprime(int res){
	for(int i=2;i<=sqrt(res);i++){
		if(res%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int l,k,p;
	cin>>l>>k;
	string a,b;
	getchar();
	getline(cin,a);
	int len=a.length();
	for(int i=0;i<=len-k;i++){
		b=a.substr(i,k);
		p=atoi(b.c_str());
		if(isprime(p)){
			cout<<b;
			return 0;
		}
	}
	cout<<"404";
	return 0;
}

////½Úµã 4 ²»¹ý
//#include <iostream>
//#include <string>
//#include <cmath>
//using namespace std;
//
//int isprime(int res){
//	for(int i=2;i<=sqrt(res);i++){
//		if(res%i==0){
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main(){
//	int N;int n;
//	int res=0;
//	char temp;
//	int count=0;
//	string str="";
//	cin>>N>>n;
//	for(int i=0;i<n;i++){
//		cin>>temp;
//		res=res*10+(temp-'0');
//		count++;
//	}
//	while(!isprime(res) && count<N){
//		res=res%(int)(pow(10,n-1));
//		cin>>temp;
//		res=res*10+(temp-'0');
//		count++;
//	}
//	if(!isprime(res)&&count==N){
//		cout<<"404";
//	}else{
//		while(res){
//			str=char(res%10+'0')+str;
//			res/=10;
//		}
//		for(int i=str.length();i<n;i++){
//			cout<<"0";
//		}
//		cout<<str;
//	}
//	return 0;
//}
