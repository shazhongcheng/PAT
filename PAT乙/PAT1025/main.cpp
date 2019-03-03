#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<iostream>
using namespace std;
const int N=100005;
struct MyData{
    int address;
    int data;
    int next;
}a[N],*b[N];

int main(){
    int head,address,next,data,n,k;
    cin>>head>>n>>k;
    for(int i=0;i<n;i++){
        cin>>address>>data>>next;
        a[address].address=address;
        a[address].data=data;
        a[address].next=next;
    }
    int j=0;
    for(int i=head;i!=-1;i=a[i].next){
        b[j++]=&a[i];
    }
    for(int i=0;i<=j-k;i+=k){
        reverse(b+i,b+i+k);
    }
    for(int i=0;i<j;i++){
        if (i != j - 1)
			printf("%05d %d %05d\n", b[i]->address, b[i]->data, b[i+1]->address);
		else
			printf("%05d %d -1\n", b[i]->address, b[i]->data);
	}
    return 0;
}


//// 错两个节点 因为没有连接处的翻转 有问题
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//struct my_list{
//    int data;
//    int next;
//};
//
//int main()
//{
//    my_list lista[100005];
//    int first,N,K,pos;
//    int mystack[100005];
//    int top=-1;
//    cin>>first>>N>>K;
//    for(int i=0;i<N;i++){
//        cin>>pos;
//        cin>>lista[pos].data>>lista[pos].next;
//    }
//    pos=first;
//    int count=0;
//    while(pos!=-1){
//        mystack[++top]=pos;
//        pos=lista[pos].next;
//        count++;
//        if(count==K){
//            int mark=lista[mystack[top]].next;
//            while(top>=0){
//                printf("%05d %d ",mystack[top],lista[mystack[top]].data);
//                if(top>0){
//                    printf("%05d\n",mystack[top-1]);
//                }else{
//                    if(mark==-1){
//                        printf("-1\n");
//                    }else{
//                        printf("%05d\n",mark);
//                    }
//                }
////                if(lista[mystack[top]].next!=-1)
////                    printf("%05d %d %05d\n",mystack[top],lista[mystack[top]].data,lista[mystack[top]].next);
////                else
////                    printf("%05d %d %d\n",mystack[top],lista[mystack[top]].data,lista[mystack[top]].next);
//////                cout<<mystack[top]<<" "<<lista[mystack[top]].data<<" "<<lista[mystack[top]].next<<endl;
//                top--;
//            }
//            count=0;
//        }
//    }
//    if(top>=0){
//        for(int i=0;i<=top;i++){
//            if(lista[mystack[i]].next != -1)
//                printf("%05d %d %05d\n",mystack[i],lista[mystack[i]].data,lista[mystack[i]].next);
//            else
//                printf("%05d %d %d\n",mystack[i],lista[mystack[i]].data,lista[mystack[i]].next);
//        }
//    }
//    return 0;
//}
