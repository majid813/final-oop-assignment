#include<iostream>
using namespace std;

class animal{
	public:
		void virtual display(){
			cout<<"animal"<<endl;
			
		}
};

class cat:public animal{
	public:
		void display(){
			cout<<"i am cat"<<endl;
			
		}
};

int main(){
	animal* a1= new cat;
	//cat* a2=new cat;
	a1->display();
	//a2->display();
	
	
	
	
	
	
	
	
}
