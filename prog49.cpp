#include <iostream>
using namespace std;

struct Library{
  int AccessNum;
  char AuthorName[100];
  char Title[100];
  int yearOfPub;
  char PublisherName[100];
  float price;
};

int main()
{
    int n;
    cout<<"Enter number of records to be Entered = ";
    cin>>n;
    Library rec[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Acess Number = ";
        cin>>rec[i].AccessNum;
        cout<<"Enter Author's Name = ";
        cin>>rec[i].AuthorName;
        cout<<"Enter Title of book = ";
        cin>>rec[i].Title;
        cout<<"Enter Year of publication = ";
        cin>>rec[i].yearOfPub;
        cout<<"Enter price of book = ";
        cin>>rec[i].price;
    }
    for(int i=0;i<n;i++){
        cout<<"Acess Number = "<<rec[i].AccessNum<<endl;
        cout<<"Author's Name = "<<rec[i].AuthorName<<endl;
        cout<<"Title of book = "<<rec[i].Title<<endl;
        cout<<"Year of publication = "<<rec[i].yearOfPub<<endl;
        cout<<"Price of book = "<<rec[i].price<<endl;
    }    
    return 0;
}
