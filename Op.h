#ifndef OP_H
#define OP_H
#include <iostream>

class Op: public Base
{
private:
  double value;
public:
  Op();
  Op(double);
  double const getVal();
  double setVal(doulbe );
  ~Op();
};

#endif
