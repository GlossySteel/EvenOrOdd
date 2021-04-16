// cPlusPlusTesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <array>

using namespace std;

bool checkEvenOrOdd(int);

int main()
{
	int user_number;

	cout << "Enter a positive number:\n";
	cin >> user_number;

	cout << "\n";

	if (user_number >= 0) {
		if (checkEvenOrOdd(user_number)) {
			cout << user_number << " is even\n";
		}
		else {
			cout << user_number << " is odd\n";
		}
	}
}
bool checkEvenOrOdd(int number) {

	if (number % 2 == 0) {
		return true;
	}
	else {
		return false;
	}

}
