#include <iostream>
using namespace std;
	
	int LS(int arr[], int n,int key){\
	
		for(int i = 0 ; i<n; i++){
			if(arr[i] == key){
				cout<<" The position of "<< key << " is ";
				return i;
			}
		}
		return -1;
		
	}



int main() {
	
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	
	cout<<"Enter the Array :: -"<<endl;
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	int key ;
	cout<<"Enter the value you search for : "<<endl;
	cin>>key;
	
	cout<<LS(arr,n,key)<<endl;
	
	
	return 0;
}
