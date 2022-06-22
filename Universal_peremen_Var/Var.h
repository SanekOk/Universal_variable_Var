#pragma once
#include<iostream>
using namespace std;
class Var
{
	enum MyEnum { Null, Int, Double, String };
	double* guru=nullptr;
public:
	Var();
	Var(int name);
	Var(double ob);
	Var(const char* st);
	Var(const Var& kop);
	~Var();
	Var& operator=(const Var& kop);
	friend ostream& operator<<(ostream& os, const Var& cou);
	Var& operator+(const Var& op)const;
	Var& operator-(const Var& op)const;
	Var& operator*(const Var& op)const;
	Var& operator/(const Var& op)const;
	Var& operator+=(const Var& opr);
	Var& operator-=(const Var& opr);
	Var& operator*=(const Var& opr);
	Var& operator/=(const Var& opr);
	bool operator<(Var& boo)const;
	bool operator>(Var& boo)const;
	bool operator<=(Var& boo)const;
	bool operator>=(Var& boo)const;
	bool operator==(Var& boo)const;
	bool operator!=(Var& boo)const;
};

