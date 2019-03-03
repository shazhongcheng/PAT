#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

struct stu{
	string all;
	string dengji;
	string rom;
	string day;
	string num;
	int grade;
};
struct Room{
    int place;
    int num;
};
int cmp(stu s1,stu s2){
	return !(s1.grade==s2.grade)?s1.grade>s2.grade:s1.all<s2.all;
}
int cmp2(Room a,Room b){
	return !(a.num==b.num)?a.num>b.num:a.place<b.place;
}



int main(){
	int N,M;
	ios_base::sync_with_stdio(false);
//	cin.tie(0);
	cin>>N>>M;
	stu s[N];
	string str;
	for(int i=0;i<N;i++){
		cin>>str;
		cin>>s[i].grade;
		s[i].all=str;
		s[i].dengji=str[0];
		s[i].rom=str.substr(1,3);
		s[i].day=str.substr(4,6);
		s[i].num=str.substr(10,3);
	}
	sort(s,s+N,cmp);
//	for(int i=0;i<N;i++){
//		cout<<s[i].all<<" "<<s[i].grade<<endl;
//	}
	int type;
	for(int i=0;i<M;i++){
		cin>>type>>str;
//		scanf("%d %s",&type,&str);
		int count=0,fen=0;
		int flag=0;
		vector<Room> room;
		int temp[1000]={0};
//		Case 1: 1 A
		cout<<"Case "<<(i+1)<<": "<<type<<" "<<str<<"\n";
		switch(type){
			case 1:
				for(int i=0;i<N;i++){
					if(s[i].dengji==str){
                            flag=1;
						cout<<s[i].all<<" "<<s[i].grade<<"\n";
					}
				}
				if(!flag){
                    cout<<"NA"<<"\n";
				}
				break;
			case 2:
				for(int i=0;i<N;i++){
					if(s[i].rom==str){
						fen+=s[i].grade;
						count++;
					}
				}
				if(count>0)
					cout<<count<<" "<<fen<<"\n";
				else
					cout<<"NA"<<"\n";
				break;
			case 3:
                for(int i=0;i<N;i++){
                    if(s[i].day==str){
                        temp[atoi(s[i].rom.c_str())]++;
                    }
                }
                for(int i=100;i<1000;i++){
                    if(temp[i]>0){
                        Room r;
                        r.place=i;
                        r.num=temp[i];
                        room.push_back(r);
                    }
                }
                if(room.size()==0){
                    cout<<"NA"<<"\n";
                    break;
                }
                sort(room.begin(),room.end(),cmp2);
                for(int i=0;i<room.size();i++){
                    cout<<room[i].place<<" "<<room[i].num<<"\n";
                }
				break;
		}
	}
}
