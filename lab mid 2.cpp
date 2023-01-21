#include<iostream>
using namespace std;
class vehicle{
	
	protected:
		int enginecapacity;
		int seatcapacity;
		public:
			vehicle(){
				cout<<" default const of vehical"<<endl;
			}
			vehicle(int a,int b){
				cout<<"Parameterized Constructor of Vehicle”"<<endl;
			}
			void display(int y, int x){
				enginecapacity=y;
				seatcapacity=x;
				cout<<x<<y;			
			}
			int enginecapacity(){
				
			}
};





