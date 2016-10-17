#ifndef VECTOR_CONTAINER
#define VECTOR_CONTAINER
#include "Container.h"
#include <vector>
#include <iostream>

using namespace std;

class VectorContainer: public Container
{
private:
Sort * sort_function;
vector<Base *> data;

public:
VectorContainer() : sort_function(NULL){};
VectorContainer(Sort * function) : sort_function(function) {};

void add_element(Base * element);
void print();
void swap(int i, int j);
Base * at(int i);
int size();


};
#endif
