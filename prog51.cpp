#include<iostream>
#include<string.h>
using namespace std;

struct Student{
    int sno;
    char name[100];
    float marks;
};

int main(){
    struct Student s1,s2;
    cout<<"Enter S.No. of Student1 = ";
    cin>>s1.sno;
    cout<<"Enter name of Student1 = ";
    cin>>s1.name;
    cout<<"Enter marks of Student1 = ";
    cin>>s1.marks;
    cout<<"Enter S.No. of Student2 = ";
    cin>>s2.sno;    
    cout<<"Enter name of Student2 = ";
    cin>>s2.name;
    cout<<"Enter marks of Student1 = ";
    cin>>s2.marks;  
    if((s1.sno == s2.sno)&&(s1.marks==s2.marks))
        cout<<"TRUE";
    else
        cout<<"FALSE";
    return 0;
}
