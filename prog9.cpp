#include<iostream>
using namespace std;
int main(){
	int n,a=0;
	cin>>n;
	if(n==2)
	{
		cout<<"prime";
	}
	for(int i=3;i<n;i++)
	{
		if(n%i==0)
		{
			a=1;
			break;
		}
	}
	if(a==1)
	{
		cout<<"not prime";
	}
	else
	{	
		cout<<"prime";
	}
}
