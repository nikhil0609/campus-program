#include <iostream>
using namespace std;

int main()
{
    int m;
    cout<<"enter marks ";
    cin>>m;
    if(m>=60)
        cout<<"Grade - FIRST"<<endl;
    else if(m>=50&&m<60)
        cout<<"Grade - SECOND"<<endl;
    else if(m>=40&&m<50)
        cout<<"Grade - THIRD"<<endl;        
    else if(m<40)
        cout<<"Grade - FAILED"<<endl;        
    return 0;
}
