#include <iostream>
#include "Base.h"
#include "Op.h"
#include "Operator.h"
#include "Add.h"
#include "Sub.h"
#include "Div.h"
#include "Mult.h"
#include "Sqr.h"
#include "Sort.h"
#include "Container.h"
#include "VectorContainer.h"
#include "ListContainer.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "Decorator.h"
#include "Ceil.h"
#include "Abs.h"
#include "Floor.h"
using namespace std;
int main(){
	Op* op7 = new Op(7.5);
  Op* op4 = new Op(-4.1);
  Op* op3 = new Op(3.9);
  Op* op2 = new Op(2.3);
  Mult* A = new Mult(op7, op4);
  Add* B = new Add(op3, A);
  Sub* C = new Sub(B, op2);
  Sqr* D = new Sqr(C);

cout << D->evaluate() << endl;

/*
VectorContainer* container = new VectorContainer();
 container->add_element(A);
 container->add_element(B);
 container->add_element(C);
 container->add_element(D);
 cout << "Container Before Sort: " << endl;
 container->print();

cout << "Container After Sort: " << endl;
container->set_sort_function(new BubbleSort());
container->sort();

container->print();
*/

Decorator * c = new Ceil(D);
cout << "ceil: " << c->evaluate() << endl;

Decorator * f = new Floor(D);
cout << "floor: " <<  f->evaluate() << endl;

Decorator * a = new Abs(D);
cout << "abs: " << a->evaluate() << endl;


return 0;

}
