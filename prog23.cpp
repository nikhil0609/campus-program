#include<iostream>
using namespace std;
int swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int s,pass,min,pos=0,temp;
	cout<<"enter size = ";
	cin>>s;
	int a[s-1];
	cout<<"enter elements = ";
	for(int i=0;i<s;i++){
		cin>>a[i];
	}
	for(int pass=0;pass<s;pass++){
		for(int i=1+pass;i<s;i++){
			if(a[i]<a[pass]){
				pos=i;
			}
		}
		if(pos>0) swap(&a[pass],&a[pos]);
		pos = 0;
	}
	for(int i=0;i<s;i++){
		cout<<a[i]<<" ";
	}
}
