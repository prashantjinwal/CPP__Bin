#include <iostream>
using namespace std;


int max_num_find(int a, int b, int c, int d){
	int max = 0;
	int arr[] ={a,b,c,d};
	int length = sizeof(arr)/sizeof(arr[0]);
	
	for(int i = 0; i<length; i++){
		if(arr[i]>max){
			max = arr[i];
		}
		
	}
	return max;
}

int main(int argc, char** argv) {
	int a,b,c,d;
	cout<<"Enter the number :";
	cin>>a>>b>>c>>d;
	int ans = max_num_find(a, b,c,d);
	cout<<ans;
	
	return 0;
}
