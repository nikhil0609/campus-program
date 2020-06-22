#include<iostream>
using namespace std;
int fibs(int n){
	if((n==0)||(n==1)){
		return n;
	}
	else{
		return (fibs(n-2)+fibs(n-1));
	}

}
int main(){
	int num,i=0;
	cin>>num;
	while(i<num){
		cout<<" "<<fibs(i);
		i++;
	}
}
