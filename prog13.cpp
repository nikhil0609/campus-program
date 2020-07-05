#include<iostream>
using namespace std;
int main(){
	for(int i=0;i<=5;i++){
		for(int j=0+i;j<5;j++){
			cout<<"  ";
		}
		for(int k=0;k<2*i+1;k++){
			cout<<" "<<i;
		}
		cout<<endl;
	}
}
