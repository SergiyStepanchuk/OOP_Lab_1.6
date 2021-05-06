//Pair.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


class Money
{
public:
	class Pair
	{
	private:
		int first;
		int second;

	public:
		int GetFirst() const;
		int GetSecond() const;
		void SetFirst(int value);
		void SetSecond(int value);

		void Read();
		void Init(int F, int S);
		void Display() const;
		string ToString() const;

		friend Pair Sum(const Pair& p1, const Pair& p2);
		friend Pair Dob(const Pair& p, int n);

	};

	int GetFirst() const { return pair.GetFirst(); }
	int GetSecond() const { return pair.GetSecond(); }
	void SetFirst(int value);
	void SetSecond(int value);

	void Init(int F, int S);
	void Read();
	void Display() const;
	string ToString() const;

	friend Money Sum(const Money& p1, const Money& p2);
	friend Money Diff(const Money& p1, const Money& p2);
	friend double Division(const Money& p1, const Money& p2);

private:
	Pair pair;
};
