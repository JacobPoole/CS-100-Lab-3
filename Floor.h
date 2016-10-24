#ifndef FLOOR_H
#define FLOOR_H
#include "Decorator.h"
class Floor: public Decorator
{
  public:
  double evaluate();
};

#endif
