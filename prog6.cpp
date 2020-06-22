#include<iostream>

using namespace std;

int factorial(int n){
	if(n>1){
		return n*factorial(n-1);
	}
}
int main(){
	int h,f;
	cout<<"enter number ";
	cin>>h;
	f = factorial(h);
	cout<<f;
	return 0;
}
