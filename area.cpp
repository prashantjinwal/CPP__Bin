#include <iostream>
using namespace std;

class cirle{
	public:
		float pie = 3.14;
	float cal_area(float radius){
		
		float areaa = pie*(radius*radius);
		cout<<endl;
		
		
		return areaa;
		
	}
};

int main() {
	cirle user;
	cout<<"enter the value of radius";
	float radius;
	cin>>radius;
	float result = user.cal_area(radius);
	cout<<result;
	return 0;
}
