//Call by reference copies actual values. Changes made to actual values
#include<iostream>

using namespace std;

int swap(int *n1,int *n2){
	int temp;
	temp= *n1;
	*n1 = *n2;
	*n2 = temp;
	return 0;
}
int main(){
	int num1,num2;
	cin>>num1;
	cin>>num2;
	swap(&num1,&num2);
	cout<<"swaped numbers are "<<num1<<" "<<num2<<endl;
	return 0;
}

