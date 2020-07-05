#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int beg, int end){
	int	mid = (beg+end)/2;
	if(n==a[mid]) return mid+1;
	if(n>a[mid]) return binarysearch(a,n,mid+1,end);
	if(n<a[mid]) return binarysearch(a,n,beg,mid-1);
	}
int main(){
	int n, s,beg=0,end,mid;
	cout<<"enter size = ";
	cin>>s;
	int a[s-1];
	cout<<"enter elements = ";
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	cout<<"enter search element = "<<endl;
	cin>>n;
	end=s-1;
	cout<<"element found at "<<binarysearch(a,n,beg,end);
}
