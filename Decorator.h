#ifndef DECORATOR_H
#define DECORATOR_H

class Decorator: public Base
{
  protected:
  Base * child;
  public:
  virtual double evaluate() = 0;
};

#endif
