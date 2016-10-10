#include <iostream>
#include "Base.h"
#include "Op.h"
#include "Operator.h"
using namespace std;
int main(){
Op * a = new Op(5);
double b = a->getVal();
cout << b << endl;



	return 0;

}
