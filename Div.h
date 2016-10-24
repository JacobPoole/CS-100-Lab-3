#ifndef DIV_H
#define DIV_H
#include "Operator.h"
#include <iostream>

class Div: public Operator{

	public:
		Div();
		Div(Base*,Base*);
		double evaluate();
};

#endif
