#include <iostream>
#include <fstream>
#include "Time.h"
using namespace std;

istream& operator>>(istream& ist, Time& time)
{
	ist >> time.hour;
	ist.get();
	ist >> time.minute;
	return ist;
};
ostream& operator<<(ostream& ost, Time& time)
{
	ost << time.hour << "." << time.minute;
	return ost;
}
