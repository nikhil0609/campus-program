#include <iostream>
#include<string.h>
using namespace std;

void strCopy(char *s,char *t){
    while(*s!=0){
        *t = *s;
        *t++;
        *s++;
    }
}

int main()
{
    char str1[100],str2[100];
    cout<<"Enter string 1 = ";
    cin>>str1;
    cout<<"Enter string 2 = ";
    cin>>str2;
    strCopy(str1,str2);
    cout<<"String 2 = "<<str2;
    return 0;
}
