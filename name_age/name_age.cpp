// name_age.cpp : Defines the entry point for the console application.
//
#pragma once

#include "stdafx.h"

using namespace std;


int main ()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name; // first_name is a variable of type string
	cin >> first_name; // read characters into first_name
	cout << "Dear " << first_name << ",\n";
	cout << "	How are you? I am fine. I miss you. ";
	cout << "You can kiss my ass!\n";
	cout << "Enter the name of a second friend:\n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?\n";
	cout << "Type 'm' if male or 'f' if female\n";
	char friend_sex {0};
	cin >> friend_sex;
	if (friend_sex == 'm')
		//cout << typeid(friend_sex).name() << "\n";
		//cout << friend_sex << "\n";
		cout << "if you see " << friend_name << " tell him to fuck off!\n";
	else if (friend_sex == 'f')
		cout << "if you see " << friend_name << " tell her to fuck off!\n";
	else
		cout << "fuck off " << first_name << "\n";
	cout << "Please type your age:\n";
	int age;
	cin >> age;
	//cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (age <= 0 || age >= 110)
		cout << "You got to be kidding!!\n";
	else if (age < 12)
		cout << "Next year you will be " << age + 1 << ".\n";
	else if (age == 17)
		cout << "Next year you will be voting.\n";
	else if (age > 70)
		cout << "I hope you are enjoying retirement.\n";
	else
		cout << "I hear you just had a birthday and you are " << age << " years old.\n";

	
}
