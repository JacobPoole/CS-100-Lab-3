#include "Add.h"

Add::Add(){
	right = 0;
	left = 0;
}

Add::Add(Base* l, Base* r){
	right = r;
	left = l;
}

double Add::evaluate(){

	return (left->evaluate() + right->evaluate());
}
