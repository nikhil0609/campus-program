#include<iostream>
#define max 100
using namespace std;
int Q[max],front=-1,rear=-1;

void enQ(){
	int n;
	cout<<"enter element = ";
	cin>>n;
	if(front==-1&&rear==-1){
		front=0;
		rear=0;
	} 
	else if(rear==max-1) cout<<"overflow"<<endl;
	else{
	rear=rear+1;
	}
	Q[rear]=n;
	cout<<"element inserted"<<endl;
}

void deQ(){
	if(rear==front) cout<<"underflow"<<endl;
	else{
		front=front+1;
	}
	cout<<"node deleted"<<endl;
}

void traverse(){
	for(int i=front;i<=rear;i++){
		cout<<Q[i]<<" ";
	}
}

int main(){
	enQ();
	traverse();
	enQ();
	traverse();
	enQ();
	traverse();
	deQ();
	traverse();
	enQ();
	traverse();	
}
