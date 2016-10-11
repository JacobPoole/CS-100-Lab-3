#include "Op.h"

Op::Op()
{
  value = 0;
}
Op::Op(double a)
{
  value = a;
}

double Op::evaluate()
{
  return value;
}
