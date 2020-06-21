#include<iostream>

using namespace std;

struct node{
	int data;
	node *nextnode;
}*head, *temp, *newnode;

void create(){
	newnode = new node;
	cout<<"enter element for insertion ";
	cin>>newnode->data;
	newnode->nextnode=head;
	head=newnode;
	cout<<"node inserted"<<endl;
}

void instatbg(){
	newnode = new node;
	cout<<"enter element for insertion at beginning ";
	cin>>newnode->data;
	newnode->nextnode=head;
	head=newnode;
	cout<<"node inserted at beginning"<<endl;
}

void instatlast(){
	newnode = new node;
	cout<<"enter element for insertion at last "<<endl;
	cin>>newnode->data;
	newnode->nextnode=NULL;
	temp=head;
	while(temp->nextnode!=NULL){
		temp = temp->nextnode;
	}
	temp->nextnode=newnode;
	cout<<"node inserted at last"<<endl;
}

void instatpos(){
	int pos;
	cout<<"enter element for insertion "<<endl;
	newnode = new node;
	cin>>newnode->data;
	cout<<"enter positon ";
	cin>>pos;
	temp=head;
	for(int i=2;i<pos;i++){
		temp = temp->nextnode;
	}
	newnode->nextnode=temp->nextnode;
	temp->nextnode=newnode;
	cout<<"node inserted at "<<pos<<endl;
}

void traverse(){
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->nextnode;
	}
}

void delfromfirst(){
	head=head->nextnode;
	cout<<"deleted from first"<<endl;
}

void delfromlast(){
	temp=head;
	while(temp->nextnode->nextnode!=NULL){
		temp=temp->nextnode;
	}
	temp->nextnode=NULL;
		cout<<"deleted from last"<<endl;
}

void delfrompos(){
	int pos;
	cout<<"enter positon to delete ";
	cin>>pos;
	temp=head;
	for(int i=2;i<pos;i++){
		temp=temp->nextnode;
	}
	temp->nextnode=temp->nextnode->nextnode;
	cout<<"deleted from position "<<pos<<endl;
}

int main(){
	create();
	instatbg();
	instatlast();
	instatpos();
	traverse();
	delfromfirst();
	traverse();
	delfromlast();
	traverse();
	delfrompos();
	traverse();
	return 0;
}
