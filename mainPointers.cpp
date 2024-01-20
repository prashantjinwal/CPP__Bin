#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a = 3;
	int* b = &a;
	// &  is (address of) operator
	cout<<"The address of a is  "<< &a <<endl;
	cout<<"The address of a is  "<< b<< endl;
	// *  is (value at) Dereference Operator 
	cout<<"The value of a is "<< *b << endl;
	
	// pointer to pointer 
	int **c = &b;
	cout<<"The address of c is "<<c<<endl;
	cout<<"The address of c is "<<&b<<endl;
	cout<<"The address in c is "<<*c<<endl;
	cout<<"The value in c is "<<**c<< endl;
	
	
	
	return 0;
}
