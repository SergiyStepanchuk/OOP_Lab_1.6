//Money.cpp
#include "Money.h"
#include <iostream>
#include <math.h>

using namespace std;


void Money::SetFirst(int value)
{
	pair.SetFirst(value);
}

void Money::SetSecond(int value)
{
	pair.SetSecond(value);
}

void Money::Init(int F, int S)
{
	SetFirst(F);
	SetSecond(S);
}

void Money::Read()
{
	int x, y;
	cout << "a = "; cin >> x;
	cout << "b = "; cin >> y;
	Init(x, y);
	cout << endl;
}

void Money::Display() const
{
	cout << GetFirst() << "." << GetSecond() << endl;
}


Money Sum(const Money& p1, const Money& p2)
{
	int P_F = p1.pair.GetFirst() + p2.pair.GetFirst();
	int P_S = p1.pair.GetSecond() + p2.pair.GetSecond();

	if (P_S > 99)
	{
		P_S = P_S - 100;
		P_F = P_F + 1;
	}

	Money tmp;
	tmp.Init(P_F, P_S);
	return tmp;
}


Money Diff(const Money& p1, const Money& p2)
{
	int P_F = p1.pair.GetFirst() - p2.pair.GetFirst();
	int P_S = p1.pair.GetSecond() - p2.pair.GetSecond();

	if (P_F < 0)
	{
		if (P_S > 0)
		{
			P_S = abs(P_S - 100);
			P_F = P_F + 1;
		}
		else
			P_S = abs(P_S);
	}


	if (P_F >= 1 && P_S < 0)
	{
		P_S = P_S + 100;
		P_F = P_F - 1;
	}

	Money tmp;
	tmp.Init(P_F, P_S);
	return tmp;
}

double Division(const Money& p1, const Money& p2)
{
	return (p1.GetFirst() + p1.GetSecond() / 100.) /
		(p2.GetFirst() + p2.GetSecond() / 100.);

}

string Money::ToString() const
{
	stringstream sstr;
	sstr << GetFirst() << "." << GetSecond() << endl;
	return sstr.str();
}

int Money::Pair::GetFirst() const
{
	return first;
}

int Money::Pair::GetSecond() const
{
	return second;
}

void Money::Pair::SetFirst(int value)
{
	first = value;
};

void Money::Pair::SetSecond(int value)
{
	second = value;
};

void Money::Pair::Init(int F, int S)
{
	SetFirst(F);
	SetSecond(S);
}

void Money::Pair::Read()
{
	int x, y;
	cout << " a = "; cin >> x;
	cout << " b = "; cin >> y;
	Init(x, y);
	cout << endl;
}

void Money::Pair::Display() const
{
	cout << " a = " << first << "; ";
	cout << " b = " << second << "; " << endl;

	cout << "(" << first << ", " << second << ")";
	cout << endl;
}

Money::Pair Sum(const Money::Pair& p1, const Money::Pair& p2)
{
	Money::Pair tmp;
	tmp.first = p1.first + p2.first;
	tmp.second = p1.second + p2.second;
	return tmp;
}

Money::Pair Dob(const Money::Pair& p, int n)
{
	Money::Pair tmp;
	tmp.first = p.first * n;
	tmp.second = p.second * n;
	return tmp;
}

string  Money::Pair::ToString() const
{
	stringstream sstr;
	sstr << "(" << first << ", " << second << ")";
	return sstr.str();
}