#include<iostream>
using namespace std;
extern int i=0;/* global variable for all files too with initial value = 0 if not given */
static int j=5; /* global variable for only this file with initial value = 0 if not given*/
void autodemo(){
	cout<<"automatic storage class value = ";
	auto int a=1; // default will be there if not specified
	cout<<a<<endl;
}
void externdemo(){
	i=2;
	cout<<"Extern storage class modified value = "<<i<<endl;
}
void staticdemo(){
	static int num=3; /*local var with initial value = 0 if not given 
						i.e.The variable is limited to the particular block;*/
	cout<<"loacal static value is = "<<num<<endl;
}
void registerdemo(){
	register int num=8;
	cout<<"register storage class value is = "<<num;
}

int main(){
	autodemo();
	externdemo();
	staticdemo();
	cout<<"global static value is = "<<j<<endl;
	registerdemo();
}
