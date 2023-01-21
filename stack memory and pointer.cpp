#include<iostream>
using namespace std;

 void foo(){
 	int x;
 	x= 9;
 	cout<<"the val of x is : "<<x<<endl;
 	cout<<"the adress of x is : "<<&x<<endl;
 	//return foo;
}
int main(){
	int x=8;
	cout<<" the val of x is : "<<x<<endl;
	cout<<" the adress of x is : "<<&x<<endl;
	 foo();
}

