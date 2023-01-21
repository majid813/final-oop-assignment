#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int birthYear;
	birthYear = 1988;
	time_t t = time(nullptr);
	tm *const pTInfo = localtime(&t);
	int currentYear = 1900 + pTInfo->tm_year;
	int age;
	age = currentYear - birthYear;
	cout<<age;
	return 0;
}