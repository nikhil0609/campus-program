#include<iostream>
using namespace std;
int main(){
	int a=0,b=1,n,c;
	cin>>n;
	cout<<a<<endl<<b<<endl;
	for(int i=3;i<=n;i++){
		cout<<a+b<<endl;
		b=a+b;
		a=b-a;
	}
}
