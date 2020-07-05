#include<iostream>
using namespace std;
int main(){
	int n, s, flag;
	cout<<"enter size = ";
	cin>>s;
	int a[s-1];
	cout<<"enter elements = ";
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	cout<<"enter search element = ";
	cin>>n;
	int beg=0,end=s-1,mid = (beg+end)/2;
	while(end>=beg){
		if(a[mid]==n){
			cout<<"element found at "<<mid+1;
			flag=1;
			break;
		}
		else if(a[mid]<n){
			beg=mid+1;
			mid = (beg+end)/2;
		}
		else if(a[mid]>n){
			end=mid-1;
			mid = (beg+end)/2;
		}
	}
	if(flag!=1) cout<<"element not found";
}
