#include<iostream>


using namespace std;


int main()
{
	int num,rem,no=0;
	cin>>num;
	int n = num;
	while(n!=0)
	{
		rem = n%10;
		no = no*10 + rem;
		n = n/10;
	}
	cout<<no;
	return(0);
}
