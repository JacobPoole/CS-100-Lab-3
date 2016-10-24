#include "VectorContainer.h"

void VectorContainer:: add_element(Base * element)
{
  data.push_back(element);
}

void VectorContainer:: print()
{

  for(unsigned i = 0; i < data.size(); ++i)
  {
    cout << data.at(i)->evaluate() << " ";
  }

}

Base * VectorContainer:: at(int i)
{
  return data.at(i);
}

void VectorContainer:: sort()
{
  sort_function->sort(this);
}

void VectorContainer:: swap(int i, int j)
{
Base * temp = data.at(i);
data.at(i) = data.at(j);
data.at(j) = temp;
}

int VectorContainer:: size()
{
  return data.size();
}
