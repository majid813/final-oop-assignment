#include<iostream>
using namespace std;
 class animal{
 	
 	public:
 	int a;
 		
 	virtual	void print(){
 		a =500;
 			cout<<"this is good book"  <<endl;
 			cout<<"The price of book is : "<<a<<endl;
 			
 			
 			
		 }
		 
 };
 class cat: public animal{
 	
 	public:
 		int add;
 		int total;
 		int b;
 		void print(){
 			b=400;
 		
 			cout<<"this is bad book"<<endl;
 			cout<<"the price of book is : "<<b<<endl;
 		
 		
 			
		 }
		 void setadd(){
		 	cout<<"the total price is"<<total<<endl;
		 	total=a+b;
		 	
		 }
		 getadd(int a, int b){
		 	total=a+b;
		 	return add;
		 }
 
 };
 int main(){
 animal* a1= new animal;
 cat * a2= new cat;
 a1->print();
 a2->print();
// a2->setadd();
 //a2->getadd( 500,400);
 }
