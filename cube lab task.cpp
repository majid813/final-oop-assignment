#include<iostream>
using namespace std;
class cube{
	double lenght;
	double width;
	double height;
	
	public:
		cube(){
			cout<<"constructor"<<endl;
			
		}
		cube( double l, double w, double h){
			lenght=l;
			width= w;
			height= h;
			
			
		}
		void display(){
			cout<<"the lenght of cube is : "<<lenght<<endl;
			cout<<"the width of cube is : "<<width<<endl;
			cout<<"the height of cube is : "<<height<<endl;
		}

		cube operator + (cube & c){
			cube a;
			a.lenght =lenght + c.lenght;
			a.width = width + c.width;
			a.height = height + c.height;
			return a;
		}
		
	
};
int main(){
	cube c2(7.9,4.5,5.6),c3(3.3,5.8,6.7);
	cout<<"enter the value of c2 obj"<<endl;
	c2.display();
	cout<<"enter the val of c3 obj"<<endl;
	c3.display();
	cout<<"the sum of lenght is"<<endl;
		cube c4;
		c4 = c2+c3;
		c4.display();
	
	
}
