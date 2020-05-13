#include<iostream>
using namespace std;
int main(){
	int n,f=1;
	cin>>n;
	for(int i=n;i>=1;i--){
		f=f*n;
		n=n-1;
	}
	cout<<f;
}
