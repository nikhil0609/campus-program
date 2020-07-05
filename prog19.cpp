#include<iostream>
using namespace std;
int main(){
	int n, s;
	cout<<"enter size = "<<endl;
	cin>>s;
	int a[s];
	cout<<"enter elements = "<<endl;
	for(int i=0;i<=s;i++){
		cin>>a[i];
	}
	cout<<"enter search element = "<<endl;
	cin>>n;
	for(int i=0;i<=s;i++){
		if(a[i]==n) cout<<"element found at "<<i+1;
		}
	}

