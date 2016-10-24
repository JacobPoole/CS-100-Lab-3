#include "Sqr.h"

Sqr::Sqr()
{

}
Sqr::Sqr(Base * a)
{
 value = a;
}

double Sqr:: evaluate()
{
  return value->evaluate() * value->evaluate();
}
