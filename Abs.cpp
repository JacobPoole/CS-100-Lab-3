#include "Abs.h"

double Abs:: evaluate()
{
  return abs(child->evaluate());
}
