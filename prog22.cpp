#include<iostream>
using namespace std;
int main(){
	int n, s,temp;
	cout<<"enter size = ";
	cin>>s;
	int a[s-1];
	cout<<"enter elements = ";
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	for(int j=0;j<s-1;j++){
		for(int i=0;i<s-j-1;i++){
			if(a[i+1]<a[i]){
				temp = a[i+1];
				a[i+1] = a[i];
				a[i] = temp;
			}
		}
	}
	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
}
