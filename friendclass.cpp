#include<iostream>
using namespace std;

	class GGF{
		private :
			int var_pri = 100;
		
		protected :
			int var_pro = 500;
		
		friend class f;
	};
	
	class f {
        public:
		void display(GGF& t){
			cout<<"The value of private is :"<< t.var_pri<<endl;
			cout<<"The value of protected is :"<< t.var_pro<<endl;
		}
		
	};




int main(){
	GGF obj;
	f wwe;
	wwe.display(obj);
	
	
	return 0;
}
