#include "BubbleSort.h"

void BubbleSort:: sort(Container * c)
{
  for(int i = 0; i < c->size() - 1; ++i)
  {
    for(int j = 0; j < c->size() - i - 1; ++j)
    {
      if(c->at(j)->evaluate() > c->at(j+1)->evaluate())
      {
        c->swap(j,j+1);
      }
    }
  }
}
