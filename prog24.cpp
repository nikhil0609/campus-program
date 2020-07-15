#include<iostream>
using namespace std;
int swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int s;
	cout<<"enter size = ";
	cin>>s;
	int a[s-1];
	cout<<"enter elements = ";
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	for(int i=0;i<s-1;i++){
		if(a[i+1]<a[i]){
			swap(a[i],a[i+1]);
			for(int k=i-1;k>=0;k--){
				if(a[i]<a[k]){
					swap(a[i],a[k]);
					}
			}
			}
		}
	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
	}

