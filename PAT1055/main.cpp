#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct people{
    string name;
    int tall;
};

bool cmp(people p1,people p2){
    if(p1.tall>p2.tall){
        return true;
    }else if(p1.tall==p2.tall){
        return p1.name<p2.name;
    }else{
        return false;
    }
}

int main()
{
    vector<people> ps;
    int N,K;
    cin>>N>>K;
    for(int i=0;i<N;i++){
        people temp;
        cin>>temp.name>>temp.tall;
        ps.push_back(temp);
    }
    sort(ps.begin(),ps.end(),cmp);
//    //打印测试
//    for(vector<people>::iterator  it=ps.begin();it<ps.end();it++){
//        cout<<it->name<<" "<<it->tall<<endl;
//    }

    int num = N/K;
    int over = N%K;
////     打印测试
//    cout<<num<<" "<<over;
    vector<people> temp;
    int mycount=0;
    for(vector<people>::iterator  it=ps.begin();it<ps.end();){
        mycount=0;
        for(int i=0;i<num+over;i++){
            if(mycount%2==0){
                temp.push_back(*it);
                mycount=(mycount+1)%2;
                it++;
            }else{
                temp.insert(temp.begin(),*it);
                mycount=(mycount+1)%2;
                it++;
            }
        }
        over=0;
        vector<people>::iterator  teit=temp.begin();
        cout<<teit->name;
        for(teit++;teit<temp.end();teit++){
            cout<<" "<<teit->name;
        }
        cout<<endl;
        temp.clear();
    }
//    vector<people>::iterator  it=temp.begin();
//    cout<<it->name;
//    for(it++;it<temp.end();it++){
//        cout<<" "<<it->name;
//    }
//    cout<<endl;
    return 0;
}
