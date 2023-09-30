#pragma once
#include <fstream>
#include <iostream>
using namespace std;
struct Data
{
	int day;
	int month;
	int year;
	 
};
std::istream& operator>>(std::istream& ist, Data& data);
std::ostream& operator<<(std::ostream& ost, Data& data);
