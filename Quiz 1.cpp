#include<iostream>
using namespace std;

class date{
	private:
		int day;
		int month;
		int year;
	public:
		date(int d , int m , int y)
		{
			day = d;
			month = m;
			year = y;
			}	
		void getDate()
			{
				cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
				}	
};

class address{
	private:
		int houseNumber;
		int streetNumber;
		string city;
	public:
		address(int h_no , int str_no , string c)
		{
			houseNumber = h_no;
			streetNumber = str_no;
			city = c;
			}	
		void getAddress()
		{
			cout<<"House No."<<houseNumber<<", Street No."<<streetNumber<<", "<<city<<". "<<endl;
			}			
};

class smartPhone{
	private:
		string brandName;
		int serialNumber;
		string version;
	public:
		static int a;
		smartPhone(string brand , int serial , string ver)
		{
			brandName = brand;
			serialNumber = serial;
			version = ver;
			a++;
			}
		void getAllValues()
		{
			cout<<"\nBrand Name: "<<brandName;
			cout<<"\nSerial Number: "<<serialNumber;
			cout<<"\nVersion (Iphone - Android): "<<version<<endl;
			}	
};

int smartPhone :: a = 0;

int main()
{
	smartPhone s1("Huawei" , 1226 , "Android") , s2("Apple" , 1259 , "Iphone");
	address a1(29 , 3 , "Lahore") , a2(23 , 9 , "Islamabad");
	date d1(25 , 10 , 2022) , d2(26,  10 ,2022);
	s1.getAllValues();
	d1.getDate();
	a1.getAddress();
	s2.getAllValues();
	d2.getDate();
	a2.getAddress();
	cout<<"\n\n"<<s1.a<<" Number of Objects were made.\n\n";
	}