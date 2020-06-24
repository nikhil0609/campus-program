#include<iostream>
using namespace std;
int fact(int n){
	if(n>1) return n*fact(n-1);
	else return 1;
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
