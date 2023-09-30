#include <iostream>
#include <fstream>
#include "Data.h"
using namespace std;

istream& operator>>(istream& ist, Data& data)
{
	ist >> data.year;
	ist.get();
	ist >> data.month;
	ist.get();
	ist >> data.day;
	return ist;
};
ostream& operator<<(ostream& ost, Data& data)
{
	ost << data.year << "." << data.month << "." << data.day;
	return ost;
}
