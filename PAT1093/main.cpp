#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1;
	string str2;
	getline(cin,str1);
	getline(cin,str2);
	int mark[255]={0};
	for(int i=0;i<str1.length();i++){
		if(str1[i]>=32&&str1[i]<=126){
			if(!(mark[str1[i]])){
				cout<<str1[i];
				mark[str1[i]]=1;
			}
		}
	}
	for(int i=0;i<str2.length();i++){
		if(str2[i]>=32&&str2[i]<=126){
			if(!(mark[str2[i]])){
				cout<<str2[i];
				mark[str2[i]]=1;
			}
		}
	}
	return 0;
}
