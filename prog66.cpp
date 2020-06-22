#include<iostream>
using namespace std;

struct node{
	int data;
	node *prev;
	node *next;
}*head=NULL,*temp,*newnode;

void create(){
	newnode = new node;
	cout<<"enter element ";
	cin>>newnode->data;
	newnode->next=NULL;
	newnode->prev=NULL;
	
}

void traverse(){
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
	
}

void insertatbeg(){
	create();
	if(head==NULL){
		head = newnode;
	}
	else{
	newnode->next=head;
	head->prev=newnode;
	head=newnode;
	cout<<"node inserted at beginning"<<endl;
	}
	traverse();
}

void insertatlast(){
	create();
	if(head==NULL){
		head=newnode;
	}
	else{
	temp=head;
	while(temp->next!=NULL){
		temp= temp->next;
	}
	}
	newnode->prev=temp;
	temp->next=newnode;
	newnode->next=NULL;
	cout<<"node inserted at last"<<endl;
	traverse();
}

void insertatpos(){
	int pos;
	create();
	cout<<"enter position ";
	cin>>pos;
	if(newnode == NULL){
        cout<<"Overflow";
	}
	else if(pos==1){
		if(head==NULL){
		head = newnode;
		}
		else{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
		}
	}
	else{
		temp=head;
		for(int i=2;i<pos;i++){
			temp=temp->next;
			if(temp == NULL){
                cout<<"Invalid position";
                return;
            }
		}
		newnode->next=temp->next;
		newnode->prev=temp;
		temp->next=newnode;
		temp->next->prev=newnode;
	}
	cout<<"node inderted at "<<pos<<endl;
	traverse();
}

void deletefrombeg(){
	head=head->next;
	head->prev=NULL;
	cout<<"node deleted from first"<<endl;
	traverse();
}

void deletefromlast(){
	temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	temp->next=NULL;
	cout<<"node deleted from last"<<endl;
	traverse();
}

void deletefrompos(){
	int pos;
	cout<<"enter position "<<endl;
	cin>>pos;
	temp=head;
	if(temp==NULL){
		cout<<"invalid position"<<endl;
		return;
	}
	else if(pos==1){
		head=head->next;
		head->prev=NULL;
	}
	else{
	for(int i=2;i<pos;i++){
		temp=temp->next;
	}
	temp->next=temp->next->next;
	temp->next->prev=temp;
	}
	traverse();
}

int main(){
	insertatbeg();
	insertatbeg();
	insertatbeg();
	insertatlast();
	insertatpos();
	deletefrombeg();
	deletefromlast();
	deletefrompos();
	return 0;
}
