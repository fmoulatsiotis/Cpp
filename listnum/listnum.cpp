// listnum.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "std_lib_facilities.h"


int main()
{
	cout << "\n------- LIST STARTING: -------\n\n";
	int i;
	for (i = 0; i <= 60; i++) {
		if (i % 6 == 0 && i % 10 == 0)
			cout << "Data Communication";
		else if (i % 6 == 0)
			cout << "Data";
		else if (i % 10 == 0)
			cout << "Communication";
		else
			cout << i;
		cout << "\n";
	}
	cout << "\n------- LIST FINISHED. -------\n\n";
	return 0;
}

