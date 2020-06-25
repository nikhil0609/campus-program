#include<iostream>
#include <string.h>
using namespace std;
int main(){
	char str[100],temp;
	cout<<"enter string = ";
	cin>>str;
	int n = strlen(str);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(str[j]<str[i]){
				temp=str[j];
				str[j]=str[i];
				str[i]=temp;
			}
		}
	}
	cout<<str;
}
