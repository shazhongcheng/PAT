//�������ȸ������������� N����1000���� M����100����
//�ֱ�Ϊ�±���������������Ĭ���±������ 1 �� N ��ţ��Ͳ���ͳ�Ƶĳ���������
//������ M �У�ÿ�и��� N ���Ǹ��������������� 1 ���򣩣����е� i ������Ϊ�� i ���±����������飩�����ּ��Կո�ָ���
//5 3 N(����) M(������) 
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
