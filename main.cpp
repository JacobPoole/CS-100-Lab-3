#include <iostream>
#include "Base.h"
#include "Op.h"
#include "Operator.h"
#include "Add.h"
#include "Sub.h"
#include "Div.h"
#include "Mult.h"
#include "Sqr.h"
using namespace std;
int main(){
	Op* op7 = new Op(7);
  Op* op4 = new Op(4);
  Op* op3 = new Op(3);
  Op* op2 = new Op(2);
  Mult* A = new Mult(op7, op4);
  Add* B = new Add(op3, A);
  Sub* C = new Sub(B, op2);
  Sqr* D = new Sqr(C);
	Div * E = new Div(D, op4);

	cout << E->evaluate();





	return 0;

}
