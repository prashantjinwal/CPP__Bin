#include <iostream>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
// for writing a text in file 
//	string str1 = "hello future coder";
//	ofstream out("file.txt");
//	out << str1;
//	
// for reading a text from external file 
	string str2;
	ifstream in("file.txt");
	getline(in, str2);
	cout<<str2;
	
	
	return 0;
}
