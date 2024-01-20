#include <iostream>
#include <string>
using namespace std;



	
	

int main() {
	
//	int arr[4] = {4,3,9,6};	
////			q4
//	int size = sizeof(arr)/sizeof(arr[0]);
//	int min = arr[0];
//	
//	for minimum value
//	for(int i = 0; i<size ; i++){
//	if(arr[i]<min)	{
//		min = arr[i];
//	}
//	}
//	cout<<min;
//	cout<<endl;
//	
//	for maximum value
//    int max = arr[0];
//	for(int i = 0; i<size ; i++){
//	if(arr[i]>max)	{
//		max = arr[i];
//	}
//	}
//	cout<<max;
//	
// for avg
//	int sum;
//	for(int i= 0 ; i < size; i++){
//	
//		sum += arr[i];
//	}
//	
//	float avg = float(sum)/size;
//	cout<<avg;
	
	
	
//	int target ;
//	cin>>target;
//	
//	for(int i = 0; i<=size; i++){
//		if(arr[i] == target){
//			cout<< "found .... position "<<i<<endl ;
//			break;
//		}
//		for(int j = size ; j >= i ;j++){
//			cout<<"not found";
//		
//			
//		}
//	}
//	




//	4 (3)

//	int ssize = 5;
//	int arr[5] = {1,4,3,6,7};
//	cout<<"print the address of array  : -"<<endl;
//	
//	
//	for (int i=0; i<=ssize; i++ ){
//		cout<<" the address of "<< i << "array "<<"is"<< &arr[i] <<endl;
//	}




	
//	char str[]= "prashant";
//	
//	int sixe = sizeof(str)/sizeof(str[0]) - 1;
////	cout << sixe;
//
//
//	for(int i ; i >= sixe/2 ; ++i){
//		swap(str[i], str[sixe - i -1]);
//	}
//	
//	cout<<str;
//	
	
	
	
	
//	
//			reverse a string

//	string myString = "Hello, World!";
//
//    // Get the length of the string
//    int length = myString.length();
//
//    // Loop to reverse the string
//    for (int i = 0; i < length / 2; ++i) {
//        // Swap characters from the beginning to the end
//        swap(myString[i], myString[length - i - 1]);
//    }
//
//    // Output the reversed string
//    cout << "Reversed String: " << myString <<endl;
//
//	



//			display lenght of string using pointer
	
	char name[10] = "prashant";
	
	char *text = name;
//	int count = 0;
//	
//	while(*(text) != '\0' ){
//		count++;
//		text++;
//	}
//	
//	cout<<count;



	
//	
//	while(*(text) != '\0' ){
//		cout<<"the address of "<< *text << static_cast<void*>(text)<<endl;
//		text++;
//	}
//	
//	


	
//				q2
//	int n ;
//	cout<<"Enter the line you have "<<endl;
//	cin>>n;
//	for(int i =0; i<=n; i++){
//		for(int k = i; k>=0; --k){
//			cout<<static_cast<char>('A'+ k);
//		}
//		cout<<endl;
//	}
//	





//				3 FACTOR

//	int num  ;
//	cin>>num;
//	
//	
//	for(int i = 1; i <= num ; i++ ){
//		if (num%i == 0){
//			cout<<i <<" ";
//		}
//	}

	
	
	
	
//	int arr[5] = {1,3,6,8,6};
//	int size = sizeof(arr)/sizeof(arr[0]);
//	int sum;
//	for(int i = 0; i <= size; i++){
//	
//	sum += arr[i];
//		
//	}
//	int avg = sum/size;
//	cout<<"The avg of array is "<<avg<<endl;
//	
//	int min = arr[0];
//	for(int j = 0; j <= size ; j++ ){
//		if(min<arr[j]){
//			min = arr[j];
//		}
//	}
//
//	int max = arr[0];
//	for(int j = 0; j <= size ; j++ ){
//		if(max>arr[j]){
//			max = arr[j];
//		}
//	}
//	cout<<max<<" minimum value of array"<<endl;
//	cout<<min<<" maximum value of array"<<endl;
//


	
//				q5(a)
	char a[] = "hello";
	char *ptr = a ;
//	int count = 0;
//	
//	while(*(ptr) != '\0'){
//		ptr++;
//		count++;
//		
//	}
//	cout<<count<<endl;

// 			q5(d)

//	while(*(ptr) != '\0'){
//		cout<<"The address of " << *ptr <<static_cast<void*>(ptr)<<endl;
//		ptr++;
//	}



//			q5(c)
//	int s_size = sizeof(a)/sizeof(a[0]) - 1;
////	cout<<s_size;
//	
//	for(int i = 0; i <= s_size/2; ++i){
//		swap(a[i], a[s_size - i -1]);
//	}
//	
//	cout<<a;
	


		
	



	
	







	
	
	return 0;
}
