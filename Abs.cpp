#include "Abs.h"
#include <cmath>

double Abs:: evaluate()
{
  return abs(child.evaluate());
}

Abs:: Abs(Base * c){
	child = c;
}
