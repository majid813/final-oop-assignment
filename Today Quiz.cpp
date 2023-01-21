#include<iostream>
using namespace std;

class date{
	private:
		int day;
		int month;
		int year;
	public:
		void setDate(int day , int month , int year)
		{
			this->day = day;
			this->month = month;
			this->year = year;
			}	
		void getDate()
		{
			cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
			}			
};

class time{
	private:
		int hour;
		int min;
		int sec;
	public:
		void setTime(int hour , int min , int sec)
		{
			this->hour = hour;
			this->min = min;
			this->sec = sec;
			}
		void getTime()
		{
			cout<<"Time: "<<hour<<":"<<min<<":"<<sec<<endl;
			}			
};

class laptop{
	private:
		int serial;
		string brand;
	public:
		date d;
		time t;
		static int ser;
		laptop()
		{
			serial = ser;
			ser++;
			}
		void setBrand(string brand)
		{
			this->brand = brand;
			}	
		void getBrand()
		{
			cout<<"Brand Name: "<<brand<<endl;
			}			
};

int laptop::ser=0;

int main()
{
	laptop l1;
	l1.setBrand("Huwaei");
	l1.d.setDate(31,10,2022);
	l1.t.setTime(2,04,26);
	l1.getBrand();
	l1.d.getDate();
	l1.t.getTime();
	laptop l2=l1;
	l2.getBrand();
	l2.t.getTime();
	l2.d.getDate();
	return 0;
}