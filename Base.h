#ifndef BASE_H
#define BASE_H
#include <iostream>
class Base
{
  /* Constructors */
public:
  Base(){}
  /* Pure Virtual Functions */
  virtual double evaluate() = 0;
};
