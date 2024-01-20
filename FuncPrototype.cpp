#include <iostream>
using namespace std;

// Prototype of function 
int sum (int a , int b) ;
//int sum (int , int);   // Also write this way but not recommeded ----

void g();

int main() {
	int num1, num2;
	cout<<"Enter The value of First number "<< num1<<endl;
	cin>>num1;
	cout<<"Enter The value of Second number "<< num2<<endl;
	cin>>num2;
	cout<<"The result is " <<sum(num1, num2)<<endl;
	
	
	g();
	
	return 0;
}

 int sum(int a , int b){
// 	formal parameters a and b will be taking value form actual parameters num1 and num2
 	int c = a + b;
 	return c ;
 }
 
void g(){
	cout<<"Hello world";
}
