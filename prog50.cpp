#include <iostream>
using namespace std;

struct Employee{
    char ename[100];
    float BasicSal;
};

int main()
{
    int n;
    float DA = 0.0,GrossSal = 0.0;
    cout<<"Enter number of Employees = ";
    cin>>n;
    struct Employee gs[n];    
    for(int i=0;i<n;i++){
        cout<<"Enter Employee name = ";
        cin>>gs[i].ename;
        cout<<"Enter Basic Salary = ";
        cin>>gs[i].BasicSal;
        DA = (gs[i].BasicSal*52.0)/100.0;
        cout<<"DA = "<<DA<<endl;
        GrossSal = DA+gs[i].BasicSal;
        cout<<"Gross Sal of "<<gs[i].ename<<" = "<<GrossSal<<endl;
    }
    return 0;
}
