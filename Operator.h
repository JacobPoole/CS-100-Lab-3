#ifndef OPERATOR_H
#define OPERATOR_H
<<<<<<< HEAD
#include <iostream>
using namespace std;

=======
#include "Base.h"
#include <iostream>
>>>>>>> origin/master
class Operator: public Base
{
	public:

	protected:
		Base* left;
		Base * right;

	private:
		virtual double evaluate() = 0;
};

#endif
