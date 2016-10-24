#ifndef ABS_H
#define ABS_H
#include "Decorator.h"
class Abs: public Decorator
{
  public:
  Abs();
  Abs(Base * c): Decorator(c) {};
  	double evaluate();
};

#endif
