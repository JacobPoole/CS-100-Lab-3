#ifndef OPERATOR_H
#define OPERATOR_H

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
