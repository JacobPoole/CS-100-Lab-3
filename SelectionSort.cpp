#include "SelectionSort.h"


void SelectionSort:: sort(Container* c)
{
  for(int i = 0; i < c->size()-1;  ++i)
  {
    int minIndex = i;
      for(int j = i + 1; j < c->size();++j)
      {
        if(c->at(j)->evaluate() < c->at(minIndex)->evaluate())
        {

          minIndex = j;
        }
      }

      c->swap(i,minIndex);
  }

}
