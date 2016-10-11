#ifndef ADD_H
#define ADD_H
#include "Operator.h"
#include "Op.h"
#include "Base.h"
#include <iostream>

class Add: public Operator
{
	public:
		Add();
		Add(Base*,Base*);
		double evaluate();

};

#endif
