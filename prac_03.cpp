#include <iostream>
using namespace std;


int main() {
	int def = 9;
	
	for(int i = 1 ; i<=def ; i++){
		if(def%i == 0){
			cout<<i<<" ";
		}
	}
	return 0;
}
