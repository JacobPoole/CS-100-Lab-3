#include "Mult.h"

Mult::Mult(){
	right = 0;
	left = 0;
}

Mult::Mult(Base* l, Base* r){
	left = l;
	right = r;
}

double Mult::evaluate(){
	return (left->getValue() * right->getValue());
}
