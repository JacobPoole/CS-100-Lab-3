#include "Sub.h"

Sub::Sub(){
	right = 0;
	left = 0;
}

Sub::Sub(Base* l, Base* r){
	left = l;
	right = r;
}

double Sub::evaluate(){
	return (left->evaluate() - right->evaluate());
}
