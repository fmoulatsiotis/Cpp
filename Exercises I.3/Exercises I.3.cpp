// Exercises I.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;


int main()
{
    //exercise 2
	/*
	double conv = 1.609;
	cout << "Please give distance in miles: \n";
	double dist_m;
	cin >> dist_m;
	double dist_k = dist_m * conv;
	cout << "Distance in kilometres is: " << dist_k << "\n";
	*/

	
	//exercise 3
	/*
	int double = 0;
	string int = 1123;
	*/

	
	// exercise 4
	/*
	cout << "Please enter two integers: \n";
	int val1;
	int val2;
	cin >> val1 >> val2;
	int diff = val1 - val2;
	int sum = val1 + val2;
	int prod = val1 * val2;
	int ratio = val1 / val2;
	if (diff < 0)
		cout << val1 << " is smaller than " << val2 << "\n";
	else if (diff > 0)
		cout << val1 << " is larger than " << val2 << "\n";
	else
		cout << val1 << " and " << val2 << " are equal\n";
	cout << "Sum: " << sum << ", Diff: " << diff << ", Prod: " << prod << ", Ratio: " << ratio << "\n";
	*/

	
	// exercise 5
	/*
	cout << "Please enter two decimals: \n";
	double val1;
	double val2;
	cin >> val1 >> val2;
	double diff = val1 - val2;
	double sum = val1 + val2;
	double prod = val1 * val2;
	double ratio = val1 / val2;
	if (diff < 0)
		cout << val1 << " is smaller than " << val2 << "\n";
	else if (diff > 0)
		cout << val1 << " is larger than " << val2 << "\n";
	else
		cout << val1 << " and " << val2 << " are equal\n";
	cout << "Sum: " << sum << ", Diff: " << diff << ", Prod: " << prod << ", Ratio: " << ratio << "\n";
	*/

	
	//exercise 6
	/*
	cout << "Please enter three integers: \n";
	int val1, val2, val3;
	cin >> val1 >> val2 >> val3;
	if (val1 < val2 && val1 < val3)
		if (val2 < val3)
			cout << val1 << ", " << val2 << ", " << val3 << "\n";
		else
			cout << val1 << ", " << val3 << ", " << val2 << "\n";
	if (val2 < val1 && val1 < val3)
		if (val1 < val3)
			cout << val2 << ", " << val1 << ", " << val3 << "\n";
		else
			cout << val2 << ", " << val3 << ", " << val1 << "\n";
	if (val3 < val1 && val3 < val2)
		if (val1 < val2)
			cout << val3 << ", " << val1 << ", " << val2 << "\n";
		else
			cout << val3 << ", " << val2 << ", " << val1 << "\n";
	*/
	
	//exercise 7
	/**/
	cout << "Please enter three strings: \n";
	string val1, val2, val3;
	cin >> val1 >> val2 >> val3;
	if (val1 < val2 && val1 < val3)
	if (val2 < val3)
	cout << val1 << ", " << val2 << ", " << val3 << "\n";
	else
	cout << val1 << ", " << val3 << ", " << val2 << "\n";
	if (val2 < val1 && val1 < val3)
	if (val1 < val3)
	cout << val2 << ", " << val1 << ", " << val3 << "\n";
	else
	cout << val2 << ", " << val3 << ", " << val1 << "\n";
	if (val3 < val1 && val3 < val2)
	if (val1 < val2)
	cout << val3 << ", " << val1 << ", " << val2 << "\n";
	else
	cout << val3 << ", " << val2 << ", " << val1 << "\n";
	
	
	
	
	
	//return 0;
}

