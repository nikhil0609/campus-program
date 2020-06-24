#include<iostream>
using namespace std;
int max(int a[],int s){
	int max=0;
	for(int i=0;i<s;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	return max;
}
int main(){
	int size;
	cout<<"enter size ";
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++){
		cout<<"Element "<<i+1<<" =";
		cin>>a[i];
	}
	cout<<max(a,size);
}
