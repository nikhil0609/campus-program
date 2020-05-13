#include<iostream>

using namespace std;

int main(){
	string a;
	int b,c;
	cin>>a;
	b = a.length();
	for(int i=0;i<=b/2;i++){
		cout<<b/2;
		if(a[i]==a[b-1-i])
		{
			c++;
		}
		else{
			c=0;
		}
	}
	if(c>0){
		cout<< "yes";
		}
	else{
		cout<< "no";
	}
	
}

