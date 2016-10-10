#ifndef SUB_H
#define SUB_H
#include "Operator.h"
#include <iostream>

class Sub: public Operator{
	
	public:
		Sub();
		Sub(Base*, Base*);
	protected:
		Base* left;
		Base* right;
	private:
		double evaluate();
};

#endif
