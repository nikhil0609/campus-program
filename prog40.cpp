#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,d,sum=0,item;
	cout<<"enter number = ";
	cin>>n;
	item = n;
	while(item!=0){
		d=item%10;
		sum=sum+pow(d,3);
		item=item/10;
	}
	if(sum==n) cout<<"Number "<<n<<" is armstrong number";
	else cout<<"Number "<<n<<" is not armstrong number";
}
