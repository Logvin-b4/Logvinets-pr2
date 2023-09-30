#pragma once
#include <fstream>
#include <iostream>
using namespace std;
struct Time
{
	int hour;
	int minute;

};
std::istream& operator>>(std::istream& ist, Time& time);
std::ostream& operator<<(std::ostream& ost, Time& time);