#include<iostream>
using namespace std;
struct student{
	int sno;
	char sname[100];
	int marks;
};

int main(){
	int n,avg,sum=0;
	cout<<"enter number of students = ";
	cin>>n;
	student s[n];
	for(int i=0;i<n;i++){
		cout<<"enter S.no = ";
		cin>>s[i].sno;
		cout<<"enter S.name = ";
		cin>>s[i].sname;
		cout<<"enter marks = ";
		cin>>s[i].marks;
	}
	for(int i=0;i<n;i++){
		sum = sum + s[i].marks;	
	}
	avg = sum/n;
	for(int i=0;i<n;i++){
		if(s[i].marks>=avg){
			cout<<s[i].sno<<" "<<s[i].sname<<" "<<s[i].marks<<endl;
		}
	}
}
