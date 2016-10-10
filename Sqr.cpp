#include "Sqr.h"

Sqr:: Sqr(base * a)
{
 value = a;
}

double Sqr:: evaluate()
{
  return value->getVal() * value->getVal();
}
