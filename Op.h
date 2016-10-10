#ifndef OP_H
#define OP_H
#include "Base.h"
#include <iostream>

class Op: public Base
{
private:
  double value;
  double evaluate();
public:
  Op();
  Op(double);
  double getVal();
  double setVal(double );
  ~Op();
};

#endif
