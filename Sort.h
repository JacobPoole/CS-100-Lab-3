#ifndef SORT_H
#define SORT_H
#include <iostream>
#include "Container.h"
class Container;
class Sort {
public:
 /* Constructors */
Sort(){};
 /* Pure Virtual Functions */
virtual void sort(Container* container) = 0;
};

#endif
