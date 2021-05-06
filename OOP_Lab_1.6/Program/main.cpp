//main.cpp
#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	//////////////////////////пара//////////////////////////
	Money::Pair p1, p2;

	cout << "Input first pair" << endl;
	p1.Read();

	cout << "Input second pair" << endl;
	p2.Read();

	cout << "First pair a and b" << endl;
	p1.Display();
	cout << endl;

	cout << "Second pair a is c, b is d" << endl;
	p2.Display();
	cout << endl;

	//додавання пар
	cout << "Sum of pairs:" << Sum(p1, p2).ToString() << endl << endl;

	//множення на число
	int number;
	cout << "(number, you want to multiply on) n = ";
	cin >> number; cout << endl;

	cout << "First pair multyplied on n : " << Dob(p1, number).ToString() << endl;
	cout << "Second pair multiplyed on n: " << Dob(p2, number).ToString() << endl;
	cout << "--------------------------------------------" << endl << endl;
	//////////////////////////гроші//////////////////////////
	Money m1, m2;

	cout << "Input money 1: " << endl;
	m1.Read();

	cout << "Input money 2: " << endl;
	m2.Read();

	cout << "Money 1: ";
	m1.Display();

	cout << "Money 2: ";
	m2.Display();
	cout << endl;

	//додавання пар
	cout << "Sum of money: " << Sum(m1, m2).ToString() << endl;

	//віднімання пар
	cout << "Difference of money: " << Diff(m1, m2).ToString() << endl;

	//ділення пар
	cout << "Division of money: " << Division(m1, m2) << endl;


	return 0;
}
