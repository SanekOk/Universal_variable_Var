#include "Var.h"

Var::Var() = default;
Var::Var(int name)
{
	guru = new double(name);
}

Var::Var(double ob)
{
	guru = new double(ob);
}
 
Var::Var(const char* st)
{
    double a=atoi(st);
	guru = new double(a);
}

Var::Var(const Var& kop)
{
 	this->guru = kop.guru;
}

Var::~Var()
{
	cout << "~Var()" << endl;
}


Var& Var::operator=(const Var& kop)
{
	this->guru = kop.guru;
	return *this;
}

Var& Var::operator+(const Var& op)const  
{ 
	Var buf; 
	buf.guru =new double(*this->guru+*op.guru);
	return buf;
	delete buf.guru;
}

Var& Var::operator-(const Var& op) const
{
	Var buf;
	buf.guru = new double(*this->guru - *op.guru);
	return buf;
	delete buf.guru;
}

Var& Var::operator*(const Var& op) const
{
	Var buf;
	buf.guru = new double(*this->guru * *op.guru);
	return buf;
	delete buf.guru;
}

Var& Var::operator/(const Var& op) const
{
	Var buf;
	buf.guru = new double(*this->guru / *op.guru);
	return buf;
	delete buf.guru;
}

Var& Var::operator+=(const Var& opr)
{
	this->guru= new double(*this->guru + *opr.guru);
	return *this;
}

Var& Var::operator-=(const Var& opr)
{
	this->guru = new double(*this->guru - *opr.guru);
	return *this;
}

Var& Var::operator*=(const Var& opr)
{
	this->guru = new double(*this->guru * *opr.guru);
	return *this;
}

Var& Var::operator/=(const Var& opr)
{
	this->guru = new double(*this->guru / *opr.guru);
	return *this;
}

bool Var::operator<(Var& boo) const
{
	if (*this->guru < *boo.guru)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Var::operator>(Var& boo) const
{
	if (*this->guru > *boo.guru)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Var::operator<=(Var& boo) const
{
	if (*this->guru <= *boo.guru)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Var::operator>=(Var& boo) const
{
	if (*this->guru >= *boo.guru)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Var::operator==(Var& boo) const
{
	if (*this->guru == *boo.guru)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Var::operator!=(Var& boo) const
{
	if (*this->guru != *boo.guru)
	{
		return true;
	}
	else
	{
		return false;
	}
}

ostream& operator<<(ostream& os, const Var& cou)
{
	os << "Var: " << *cou.guru << endl;
	return os;
}
