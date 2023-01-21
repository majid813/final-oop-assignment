#include <iostream>
using namespace std;

class person{
	private:
		string name;
		 int age;
	public:
		person(string n, int ag){
			name = n;
			age = ag;
		}
//		void set_data(string n, int ag){
//			name = n;
//			age = ag;
//		}
		void get_data(){
			cout<<"Name of student is: "<<name<<endl;
			cout<<"Age of student is: "<<age<<endl;
			
		}
};

class student:private person{
	private:
		int roll_no;
		
	public:
		student(string n, int ag, int roll_n):person(n, ag){
//			set_data(n, ag);
			get_data();
			roll_no = roll_n;
			cout<<"Roll no student is: "<<roll_no;
			
		}
};
int main(){
	student s1("temp", 23, 24);
	
}
