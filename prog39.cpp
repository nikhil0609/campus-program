#include<iostream>
using namespace std;
int fact(int n){
	int f=1;
	do{
		f = f*n;
		n--;
	}
	while(n>=1);
	return f;
}
int main(){
	int n,r;
	cout<<"enter n = ";
	cin>>n;
	cout<<"enter r = ";
	cin>>r;
	if(r>n) cout<<"invalid";
	else cout<<fact(n)/(fact(n-r)*fact(r));
}
