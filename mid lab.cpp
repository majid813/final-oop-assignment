#include<iostream>
using namespace std;

class iPhone13{
	protected:
	int weight;
	double camera;
	double display;
		public:
			iPhone13(){
			
				weight=200;
				camera=12;
				display=6.8;
				cout<<"HERE ARE THE DETAILS OF IPHONE 13"<<endl;
			}
			iPhone13(int w, int c,double d ){
				weight=200;
				camera=12;
				display=6.8;
				cout<<"the weight of iphone 13 : "<<weight<<endl;
				cout<<"the camera of iphone 13 : "<<camera<<endl;
				cout<<"the display of iphone 13: "<<display<<endl;
				
			}
		~iPhone13(){
			cout<<"distructor of iphone 13"<<endl;
		}
	
	
	
};

class iPhone13pro: public iPhone13{
	public:
		int weightt;
		double cameraa;
		double displayy;
		
		iPhone13pro(){
			cout<<"HERE ARE THE DETAILS OF IPHONE 13 PRO"<<endl;
			weight=204;
			camera=12;
			display=6.1;
			
		}
		
		iPhone13pro(int wi, double ca, double di){
			weight=204;
			camera=12;
			display=6.1;
				cout<<"the weight of iphone 13 pro : "<<weight<<endl;
				cout<<"the camera of iphone 13 pro : "<<camera<<endl;
				cout<<"the display of iphone 13 pro : "<<display<<endl;
			
			
		}
		~ iPhone13pro(){
			cout<<"destructor of iphone 13 pro"<<endl;
		}
	
	
};

class iphone13promax: public iPhone13{
	public:
	int weight;
	double camera;
	double display;
	
	iphone13promax(){
		weight=240;
		camera=12;
		display=6.7;
		cout<<"details  of 13 pro max : "<<endl;
	}
	
	
		iphone13promax(int wie, double caa, double dis){
			weight=240;
			camera=12;
			display=6.7;
			
				cout<<"the weight of iphone 13 pro max : "<<weight<<endl;
				cout<<"the camera of iphone 13 pro max : "<<camera<<endl;
				cout<<"the display of iphone 13 pro max: "<<display<<endl;
			
		
		}
		
~ iphone13promax(){
	cout<<"destructor of iphone 13 pro max"<<endl;
}
	
	
	
};
int main(){
	iPhone13 a1;
	iPhone13pro a3;
	iphone13promax a5;
	iPhone13 a2(200,12,6.8);
	iPhone13pro a4(204,12,6.1);
	iphone13promax a6(240,12,6.1);
	
	
	








}






