#include "Decorator.h"

Decorator:: Decorator()
{
  child = 0;
}

Decorator:: Decorator(Base * c)
{
  child = c;
}
