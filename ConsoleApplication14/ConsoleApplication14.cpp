
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <clocale>
#include "Work.h"

using namespace std;
void input(ifstream& ist, vector <Work>& works) {
	while (false == ist.eof()) {
		Work work;
		ist >> work;
		works.push_back(work);
	}
}

void output(vector <Work> works) {
	for (Work work : works) {
		cout << work;
	}
}



int main()
{
	setlocale(0, "Rus");
	ifstream ist("in.txt");
	vector <Work> works;

	input(ist, works);
	output(works);

	return 0;
}