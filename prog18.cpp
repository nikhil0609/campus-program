#include<iostream>
using namespace std;
int linearsearch(int a[],int n, int s){
	if(n<0) return -1;
	if(a[s-1]==n) return s;
	else return linearsearch(a,n,s-1);
}
int main(){
	int n, s;
	cout<<"enter size = ";
	cin>>s;
	int a[s-1];
	cout<<"enter elements = ";
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	cout<<"enter search element = "<<endl;
	cin>>n;
	cout<<"element found at "<<linearsearch(a,n,s);
}
