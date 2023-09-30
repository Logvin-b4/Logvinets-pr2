#pragma once
#include <iostream>
#include <fstream>
#include "Data.h"
#include "Time.h"

struct Work
{
	Data data;
	Time time;
	string owner;
};

std::ostream& operator<<(std::ostream& ost, Work& work);
std::istream& operator>>(std::istream& ist, Work& work);
