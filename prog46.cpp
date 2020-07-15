#include<iostream>
using namespace std;
struct complex{
	int real;
	int imag;
};

complex add(complex n1, complex n2){
	complex sum;
	sum.real = n1.real+n2.real;
	sum.imag = n1.imag+n2.imag;
	return sum;
}

complex sub(complex n1, complex n2){
	complex diff;
	diff.real = n1.real-n2.real;
	diff.imag = n1.imag-n2.imag;
	return diff;
}

complex mul(complex n1,complex n2){
	complex mul;
	mul.real=(n1.real*n2.real)-(n1.imag*n2.imag);
	mul.imag=(n1.real*n2.imag)+(n1.imag*n2.real);
	return mul;
}

int main(){
    complex n1,n2,compSum,compDiff,compMult;
    cin>>n1.real>>n1.imag;
    cin>>n2.real>>n2.imag;
    compSum = add(n1,n2);
    cout<<"Sum = "<<compSum.real<<" + "<<compSum.imag<<"i"<<endl;
    compDiff = sub(n1,n2);
    cout<<"Difference = "<<compDiff.real<<" + "<<compDiff.imag<<"i"<<endl;
    compMult = mul(n1,n2);
    cout<<"Product = "<<compMult.real<<" + "<<compMult.imag<<"i";
    return 0;
}
