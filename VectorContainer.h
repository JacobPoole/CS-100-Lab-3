#ifndef VECTOR_CONTAINER
#define VECTOR_CONTAINER
#include "Container.h"
#include "Sort.h"
#include <vector>
#include <iostream>

using namespace std;

class Sort;

class VectorContainer: public Container
{
private:
vector<Base *> data;

public:
VectorContainer() : Container(){};
VectorContainer(Sort * function) : Container(function) {};
void sort();
void add_element(Base * element);
void print();
void swap(int i, int j);
Base * at(int i);
int size();


};
#endif
