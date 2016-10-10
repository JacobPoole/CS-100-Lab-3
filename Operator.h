#ifndef OPERATOR_H
#define OPERATOR_H
#include <iostream>
using namespace std;

class Operator: public Base
{
	public:
		Operator();
		Operator(Base*, Base*);

	protected:
		Base* left;
		Base * right;
	
	private:
		double evaluate();			
};

#endif
