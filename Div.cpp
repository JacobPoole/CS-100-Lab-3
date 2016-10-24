#include "Div.h"

Div::Div(){
	left = 0;
	right = 0;
}

Div::Div(Base* l, Base* r){
	left = l;
	right = r;
}

double Div::evaluate(){
	return (left->evaluate()/right->evaluate());
}
