#ifndef OPERATOR_H
#define OPERATOR_H
#include <iostream>
#include "Base.h"
#include <iostream>
using namespace std;
class Operator: public Base
{
	public:
Operator();
	protected:
		Base* left;
		Base * right;

		virtual double evaluate() = 0;
};

#endif
