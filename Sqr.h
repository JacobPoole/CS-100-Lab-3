#ifndef SQR_H
#define SQR_H
#include <iostream>
#include "Base.h"

class Sqr: public Base
{
protected:
  Base * value;

private:
  double evaluate();
public:
  Sqr(Base *);
};

#endif
