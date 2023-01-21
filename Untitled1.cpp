#include<iostream>
using namespace std;

class draw{
	public:
	void draw( int a int b, int c, int d){
			cout<<"one side of shape"<<endl;
			cin>>a;
			cout<<"two side of shape"<<endl;
			cin>>b;
			cout<<"theree side of shape"<<endl;
			cin>>c;
			cout<<"four side of shape"<<endl;
			cin>>d;
			 
			
		}
		
	
	
};
class sqauare:public draw{
	public:
		void square(int a,int b,int c, int d){
			cout<<"four side of square is"<<endl;
			void draw();
			
			
		}
	
	
	
		
}; 

class triangle:public square{
	public:
			void triangle(int a,int b,int c){
			cout<<"three  side of triangle is"<<endl;
			void draw();
	
		
};
int main(){
	
}

