#include<iostream>
using namespace std;
int main(){
	int a,b,max,min;
	cout<<"enter row size = ";
	cin>>a;
	cout<<"enter col size = ";
	cin>>b;
	int arr[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cin>>arr[i][j];
		}	
	}
	min=max=arr[0][0];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
			if(arr[i][j]<min){
				min=arr[i][j];
			}
		}	
	}
	cout<<"max = "<<max<<endl2;
	cout<<"min = "<<min;
	
}
