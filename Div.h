#ifndef DIV_H
#define DIV_H
#include "Operator.h"
#include <iostream>

class Div: public Operator{

	public:
		Div();
		Div(Base*,Base*);
	protected:
		Base* left;
		Base* right;
	private:
		double evaluate();
};

#endif
