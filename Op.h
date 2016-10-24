#ifndef OP_H
#define OP_H
#include "Base.h"
#include <iostream>

class Op: public Base
{
private:
  double value;
public:
  Op();
  Op(double);
  double evaluate();
  ~Op();
};

#endif
