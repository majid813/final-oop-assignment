#include <iostream>
using namespace std;

class member{
	private:
		float serialNumber;
	public:
		static int count;
		static int serial;
		void setData()
		{
			serial++;
			serialNumber = serial;
		}
		member()
		{
			count++;
			cout<<"\n\n\t\ti am object Number: "<<count;
			setData();
			cout<<"\n My Serial Number = "<<serialNumber;
						}				
			};
int member::count=0;
int member::serial=0;

int main() 
{
	member m1,m2,m3;
	
	return 0;
}
