#include<iostream>
using namespace std;

class Shape{
	
	public:
		int area;
		
	virtual	void calculateArea(){
		cout<<" shape 11"<<endl;
					
		}
		void printArea(){
			cout<<"shape 1"<<endl;
		}
		
};
class TwoDim : public Shape{
	public:
		int Area;
	void calculateTwoDimArea(){
		cout<<"calculate area of two dim is"<<Area<<endl;			
		}
		
		void printarea(){
		
		}
		
		
};

class ThreeDim: public Shape{
	public:
		int threearea;
		
		void calculateThreeDimArea(){
		cout<<"calculate of area of three dim"<<endl;			
		}
		
		
};
class Circle: public TwoDim {
	public:
		void printArea(){
			cout<<"the area of circle"<<endl;
			
		}
};

class Triangle : public TwoDim{
	public:
		void printArea(){
			cout<<"the area of triangle is "<<endl;
		}
};
class Rectangle : public TwoDim{
	public:
		void printArea(){
			cout<<"the area of rectangle is "<<endl;
		}
};
class Cube: public ThreeDim{
	public:
		void printArea(){
			cout<<"calculate three dim area of cube"<<endl;
		}
};
class Cone: public ThreeDim{
	public:
		void printArea(){
			cout<<" calculate three dim area of cone"<<endl;
		}
};




int main(){
	Shape* obj1 = new Shape();
	obj1->printArea();
	obj1->calculateArea();
	TwoDim* obj2 = new TwoDim();
	ThreeDim* obj3 = new ThreeDim();
	TwoDim* obj4 = new Circle();
	TwoDim* obj5 = new Triangle();
	Circle* obj6 = new Circle();
	Rectangle* obj7 = new Rectangle();
	Cube* obj8 = new Cube();
	Cone* obj9 = new Cone();
	obj7->printArea();
	obj8->printArea();
	obj9->printArea();
	obj8->calculateThreeDimArea();
	obj6->calculateTwoDimArea();	
	
	return 0;
}
