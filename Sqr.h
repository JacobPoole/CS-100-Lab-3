#ifndef SQR_H
#define SQR_H
#include <iostream>
#include "Base.h"

class Sqr: public Base
{
protected:
  Base * value;
public:
  Sqr();
  Sqr(Base *);
    double evaluate();
};

#endif
