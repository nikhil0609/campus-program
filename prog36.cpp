#include<iostream>
using namespace std;
int len(char *s){
	int count;
	while(*s!=0){
		count++;
		*s++;
	}
	return count;
}
int main(){
	char str[100];
	cout<<"Enter string = ";
	cin>>str;
	cout<<len(str);
}

