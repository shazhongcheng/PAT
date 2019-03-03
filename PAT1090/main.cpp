#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
	int n,k,t1,t2;
	map< int,vector<int> > m;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>t1>>t2;
		m[t1].push_back(t2);
		m[t2].push_back(t1);
	}
	while(k--){
		int cnt,flag=0,a[100000]={0};
		cin>>cnt;
		vector<int> v(cnt);
		for(int i=0;i<cnt;i++){
			cin>>v[i];
			a[v[i]]=1;
		}
		for(int i=0;i<v.size();i++){
			for(int j=0;j<m[v[i]].size();j++){
				if(a[m[v[i]][j]]==1) flag=1;
			}
		}
		cout<<(flag?"No":"Yes")<<endl;

	}
}
////思路有问题
//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//int main(){
//	map<string,string> key[2];
//	int N,M;
//	cin>>N>>M;
//	string str1,str2;
//	for(int i=0;i<N;i++){
//		cin>>str1>>str2;
//		key[0][str1]=str2;
//		key[1][str2]=str1;
//	}
//	int num;
//	for(int i=0;i<M;i++){
//		cin>>num;
//		int flag=0;
//		for(int j=0;j<num;j++){
//			cin>>str1;
//			if(!flag){
//				if(key[0][str1]!=0 || key[1][str1]!=0){
//					flag=1;
//				}
//			}
//		}
//		if(flag){
//			cout<<"No"<<endl;
//		}else{
//			cout<<"Yes"<<endl;
//		}
//	}
//}
