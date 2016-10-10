#ifndef MULT_H
#define MULT_H
#include "Operator.h"
#include <iostream>

class Mult: public Operator{

	public:
		Mult();
		Mult(Base*, Base*);
	protected:
		Base* right;
		Base* left;
	private:
		double evaluate();
};

#endif
