#ifndef FLOOR_H
#define FLOOR_H
#include "Decorator.h"
class Floor: public Decorator
{
  public:
  Floor();
  Floor(Base * c): Decorator(c){};
  double evaluate();
};

#endif
