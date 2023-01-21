#include<iostream>
using namespace std;
 class animal{
 	
 	public:
 	
 		void print(){
 		
 			cout<<"this is good book"<<endl;
 			
 			
 			
		 }
		 
 };
 class cat: public animal{
 	
 	public:
 		
 		
 		void print(){
 			
 		
 			cout<<"this is bad book"<<endl;
 		
 			
 			
		 }
 
 };
 int main(){
 animal* a1= new cat;
 a1->print();
 
 }
