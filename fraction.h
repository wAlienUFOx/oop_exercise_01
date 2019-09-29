#ifndef D_FRACTIONS_H
#define D_FRACTIONS_H

#include <iostream>

struct fractions{
  fractions();
  fractions(int a, int b);

  int get(int i);
  void set(int i);
  
  fractions _add(const fractions& dr) const;
  fractions _sub(const fractions& dr) const;
  fractions _mult(const fractions& dr) const;
  fractions _div(const fractions& dr) const;
  fractions _reduce(fractions& res) const;
  void _sravn(const fractions& dr) const;  

public:
  int arr[2];
};


#endif

