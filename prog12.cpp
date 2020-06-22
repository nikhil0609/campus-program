#include<iostream>
using namespace std;
int power(int a, int b){
	if(a==1){
		return 1;
	}
	if(b==0){
		return 1;
	}
	if(b>=1){
		return (a*power(a,b-1));
	}
}
int main(){
	int c,d;
	cin>>c;
	cin>>d;
	cout<<power(c,d);
	return 0;
}
