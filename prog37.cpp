#include<iostream>
using namespace std;
int main(){
	int num;
	double sum = 0.0;
	cout<<"enter number = ";
	cin>>num;
	for(int i=1;i<=num;i++){
		sum = sum + 1.0/i;
	}
	cout<<sum;
	return 0;
}
