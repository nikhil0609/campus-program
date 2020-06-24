#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(b%a==0){
		return a;
	}
	if(a%b==0){
		return b;
	}	
	if(a>b){
		return gcd(a%b,b);
	}
	else{
		return gcd(b%a,a);
	}
}
int main(){
	int num1,num2;
	cout<<"enter two number to find gcd ";
	cin>>num1>>num2;
	cout<<gcd(num1,num2);
}
