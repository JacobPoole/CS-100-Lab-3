#ifndef DECORATOR_H
#define DECORATOR_H
#include "Base.h"
class Decorator: public Base
{
  protected:
  Base * child;
  public:
  Decorator();
  Decorator(Base *);
  virtual double evaluate() = 0;
};

#endif
