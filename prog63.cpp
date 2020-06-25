#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
}*top=NULL,*ptr, *newnode;

void create(){
	int n;
	cout<<"enter element ";
	cin>>n;
	newnode = new node;
	newnode->data=n;
	newnode->next=NULL;
}

void push(){
	create();
	if(top==NULL){
		top=newnode;
	}
	else{
		newnode->next=top;
		top=newnode;
	}
	cout<<"node inserted"<<endl;
}

void pop(){
	if(top==NULL) cout<<"underflow"<<endl;
	else {
		top=top->next;
		cout<<"item poped"<<endl;
	}
}

void traverse(){
	if(top==NULL) cout<<"empty stack"<<endl;
	else{
		ptr = top;
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
		cout<<endl;
	}
}

int main(){
	push();
	traverse();
	push();
	traverse();
	push();
	traverse();
	pop();
	traverse();
	push();
	traverse();	
}
