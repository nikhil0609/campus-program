#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
}*front=NULL, *rear=NULL, *newnode,*ptr;

void create(){
	int n;
	cout<<"enter element ";
	cin>>n;
	newnode = new node;
	newnode->data=n;
	newnode->next=NULL;
}

void enQ(){
	create();
	if(front==NULL&&rear==NULL){
		front=newnode;
		rear=newnode;
	}
	else{
		ptr=front;
		while(ptr->next!=NULL){
		ptr=ptr->next;
		}
		ptr->next=newnode;
		rear=newnode;
		}
	cout<<"node inserted"<<endl;
}

void deQ(){
	if(front==NULL&&rear==NULL) cout<<"underflow"<<endl;
	else{
		front=front->next;
	}
	cout<<"node deleted"<<endl;
}

void traverse(){
	if(front==NULL&&rear==NULL) cout<<"empty stack"<<endl;
	else{
		ptr = front;
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
		cout<<endl;
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
