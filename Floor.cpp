#include "Floor.h"


double Floor:: evaluate()
{
  return floor(child->evaluate());
}
