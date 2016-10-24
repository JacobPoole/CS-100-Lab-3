#include "ListContainer.h"
#include <iterator>
using namespace std;
void ListContainer:: add_element(Base* element){
    data.push_back(element);
}

void ListContainer:: print()
{
    for(list<Base*>::iterator it = data.begin(); it != data.end(); it++)
    {
        cout << (*it)->evaluate() << " ";
    }
    cout << endl;
}

void ListContainer:: swap(int i, int j)
{
  list<Base*>::iterator it = data.begin();
  list<Base*>::iterator a;
  list<Base*>::iterator b;
  for(int m = 0; m <= j; m++)
  {
      if (m == i){
        a = it;
      }
      if(m == j){
        b = it;
      }
      it++;
  }

  iter_swap(a,b);
}

void ListContainer:: sort()
{

  sort_function->sort(this);
}

Base * ListContainer:: at(int i){

  list<Base*>::iterator it = data.begin();
  for(i; i !=0; --i)
  {
    it++;
  }
  return *it;

}

int ListContainer:: size(){
return data.size();
}
