#include <iostream>
using namespace std;



int main() {
	int n;
	cout<<"Enter the number of line "<<endl;
	cin>>n;
	int a = 65;
	
	
	for(int i = 1; n>=i ; i++){

		 for (int k = i; k >= 0; --k) {
            cout << static_cast<char>('A' + k);
        }

		cout<<endl;
		
	}
	
	
	return 0;
}
