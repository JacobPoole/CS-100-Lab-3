#include "Op.h"

Op::Op()
{
  value = 0;
}
Op::Op(double a)
{
  value = a;
}
double const Op::getVal()
{
  return value;
}

double Op::setVal(double a)
{
  value = a;
  return value;
}
double Op::evaluate()
{
  return value;
}
