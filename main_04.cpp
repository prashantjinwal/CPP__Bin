#include <iostream>
#include<iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a = 3 , b = 444 , c = 344587;
	//....without setw....
	cout<<"the value of a is "<< a <<" without setw "<<endl;
	cout<<"the value of b is" << b <<" without setw"<<endl;
	cout<<"the value of c is" << c << " without setw"<<endl;
	//....with setw....
	cout<<"the value of a is " <<setw(6)<<a   <<"    without setw"<<endl;
	cout<<"the value of b is " <<setw(6)<<b   <<"    without setw "<<endl;
	cout<<"the value of c is " <<setw(6)<<c   <<"    without setw" <<endl;
	
	
	
	
	return 0;
}
