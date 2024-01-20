#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
//	int marks[]={34,55,6,78,8};
//	for (int i = 0; i<5 ; i++){
//		cout<<"the value of marks"<<i <<" is "<<marks[i]<<endl;
//	}
//	cout<<marks[2];


  	int garba[] = {37,66,78,8,96,60};
  	int* m = garba;
  	
  	cout<<"The value is  " <<*(m+2);
	
	return 0;
}
