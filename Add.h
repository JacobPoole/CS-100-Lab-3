#ifndef ADD_H
#define ADD_H
#include "Operator.h"
#include <iostream>

class Add: public Operator
{
	public:
		Add();
		Add(Base*,Base*);
	protected:
		Base * left;
		Base * right;
	private:
		double evaluate;

};

#endif
