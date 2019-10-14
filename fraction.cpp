#include "fraction.h"
#include <algorithm>

fractions::fractions(): arr{0, 0} {}
fractions::fractions(int a, int b): arr{a, b} {}

void fractions::_read(std::istream& is){
  for(int i = 0; i < 2; i++)
    is >> arr[i];
}
void fractions::_write(std::ostream& os) const{
  for(int i = 0; i < 2; i++)
    {
      os << arr[i];
      if(i < 1)
	os << '/';
    }
  os << '\n';
}
fractions fractions::_add(const fractions& dr) const{
  fractions result{};
  result.arr[0] = (arr[0] * dr.arr[1]) + (arr[1] * dr.arr[0]);
  result.arr[1] = arr[1] * dr.arr[1];
  result._reduce();
  return result;
}
fractions fractions::_sub(const fractions& dr) const{
  fractions result{};
  result.arr[0] = (arr[0] * dr.arr[1]) - (arr[1] * dr.arr[0]);
  result.arr[1] = arr[1] * dr.arr[1];
  result._reduce();
  return result;
}
fractions fractions::_mult(const fractions& dr) const{
  fractions result{};
  for(int i = 0; i < 2; i++)
    {
      result.arr[i] = arr[i] * dr.arr[i];
    }
  result._reduce();
  return result;
}
fractions fractions::_div(const fractions& dr) const{
  fractions result{};
  result.arr[0] = arr[0] * dr.arr[1];
  result.arr[1] = arr[1] * dr.arr[0];
  result._reduce();
  return result;
}
fractions fractions::_reduce() {
  int g = std::__gcd(arr[0], arr[1]);
  arr[0] /= g;
  arr[1] /= g; 
  return *this;
}
int fractions::_sravn(const fractions& dr) const{
  int result;
  if(arr[0] * dr.arr[1] < arr[1]*dr.arr[0]){
    result = -1;
  }
  else if(arr[0] * dr.arr[1] > arr[1]*dr.arr[0]){
    result = 1;
  }
  else
    result = 0;
  return result;
}

