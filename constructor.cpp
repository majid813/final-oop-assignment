#include<iostream>
using namespace std;
class book{
	public:
		book(){
		
		cout<<"this is classs one"<<endl;
		}
		
		
		
		book(int a, int b){
	
		
			cout<<"this is parametrize cons"<<endl;
			cout<<a << b<<endl;
		}
};
class book2 : public book{
	public:
		book2(){
			cout<<"book 2 constructor"<<endl;
		}
		book2(int a, float b, int c){
			
			cout<<"parameter of book 2 "<<endl;
			cout<<"the val of a is :"<<a<<endl;
			cout<<"the val of b is : "<<b<<endl;
			cout<<"the val of c is : "<<c<<endl;
	
		}
	
	
	
};
int main(){
	book a1;
	book a2(400,500);
	book2 obj();
	book2 obj1(78,9.8,123);

}
