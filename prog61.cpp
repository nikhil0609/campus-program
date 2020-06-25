#include<iostream>
#define max 100
using namespace std;
int top=-1, stack[max];

void push(){
	int n;
	cout<<"enter element ";
	cin>>n;
	top = top+1;
	stack[top]=n;
	cout<<"element "<<n<<"pushed"<<endl;
}

void pop(){
	if(top==-1) cout<<"underflow"<<endl;
	else top = top-1;
	cout<<"item poped"<<endl;
}

void traverse(){
	for(int i=0;i<=top;i++){
		cout<<stack[i]<<" ";
	}
	cout<<endl;
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
	pop();
	traverse();
	
}
