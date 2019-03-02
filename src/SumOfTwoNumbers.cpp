

/*  Assignment:   Project #0:  SumOfTwoNumbers.cpp
 *      Author:   Aniela Kosek, 300234
 *      Grader:   Wiktor Kuśmirek
 */

#include<iostream>
using namespace std;

int main() {
	cout << "Type the first number: ";
	int firstNumber;
	cin >> firstNumber;
	cout << "Type the second number: ";
	int secondNumber;
	cin >> secondNumber;
	
	int sum = firstNumber + secondNumber;
	cout << "The sum of these numbers is " << sum << '\n';
}