#ifndef CEIL_H
#define CEIL_H
#include "Decorator.h"

class Ceil: public Decorator
{
public:
  Ceil();
  Ceil(Base * c): Decorator(c){};
  double evaluate();
};

#endif
