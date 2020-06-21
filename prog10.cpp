//Call by value Does not copy actual values. No changes made to actual values
#include<iostream>

using namespace std;

int swap(int n1,int n2){
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"swaped numbers are "<<n1<<" "<<n2<<endl;
	return 0;
}
int main(){
	int num1,num2;
	cin>>num1;
	cin>>num2;
	swap(num1,num2);
	return 0;
}

