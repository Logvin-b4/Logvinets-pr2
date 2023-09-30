#include <iostream>
#include <fstream>
#include "Work.h"
using namespace std;

istream& operator>>(istream& ist, Work& work)
{
	ist >> work.data;
	ist >> work.time;
	ist >> work.owner;
	return ist;
};
ostream& operator<<(ostream& ost, Work&work)
{
	ost << work.data << " " << work.time << " " << work.owner << endl;
	return ost;
}
