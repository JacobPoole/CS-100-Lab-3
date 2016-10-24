#ifndef SUB_H
#define SUB_H
#include "Operator.h"
#include <iostream>

class Sub: public Operator{

	public:
		Sub();
		Sub(Base*, Base*);
		double evaluate();
};

#endif
