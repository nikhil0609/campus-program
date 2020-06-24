#include <iostream>
#include<string.h>
using namespace std;

int check(char *s,char *t){
	int flag = 1;
    while(*s!=0){
		if(*t == *s){
			flag = 0;
		}
		else{
			flag = 1;
		}
        *t++;
        *s++;
    }
    return flag;
}

int main()
{
    char str1[100],str2[100];
    int f;
    cout<<"Enter string 1 = ";
    cin>>str1;
    cout<<"Enter string 2 = ";
    cin>>str2;
    f = check(str1,str2);
    if(f==0){
    	cout<<"yes they are identical";
	}
	else{
		cout<<"no they are unidentical";
	}
    return 0;
}
