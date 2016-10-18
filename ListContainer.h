#ifndef LIST_CONTAINER
#define LIST_CONTAINER
#include "Container.h"
#include "Base.h"
#include <iostream>
#include <list>

using namespace std;

class Sort;

class ListContainer: public Container
{
    private:
        list<Base *> data;
	public:
		ListContainer() : Container(){};
    ListContainer(Sort * function) : Container(function) {};
    void sort();
		void add_element(Base* element);
		void print();
		void swap(int i, int j);

		Base* at(int i);
		int size();

};
#endif
