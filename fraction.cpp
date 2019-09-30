#include "fraction.h"

fractions::fractions(): arr{0, 0} {}
fractions::fractions(int a, int b): arr{a, b} {}

int fractions::get(int i){
  return arr[i];
}
void fractions::set(int i){
  std::cin >> arr[i];
}

fractions fractions::_add(const fractions& dr) const{
  fractions result{};
  result.arr[0] = (arr[0] * dr.arr[1]) + (arr[1] * dr.arr[0]);
  result.arr[1] = arr[1] * dr.arr[1];
  if(arr[1] == 0){
    result.arr[0] = dr.arr[0];
    result.arr[1] = dr.arr[1];
  }
  if(dr.arr[1] == 0){
    result.arr[0] = arr[0];
    result.arr[1] = arr[1];
  }
  return result;
}
fractions fractions::_sub(const fractions& dr) const{
  fractions result{};
  result.arr[0] = (arr[0] * dr.arr[1]) - (arr[1] * dr.arr[0]);
  result.arr[1] = arr[1] * dr.arr[1];
  if(arr[1] == 0){
    result.arr[0] = -dr.arr[0];
    result.arr[1] = dr.arr[1];
  }
  if(dr.arr[1] == 0){
    result.arr[0] = arr[0];
    result.arr[1] = arr[1];
  }
  return result;
}
fractions fractions::_mult(const fractions& dr) const{
  fractions result{};
  for(int i = 0; i < 2; i++)
    {
      result.arr[i] = arr[i] * dr.arr[i];
    }
  return result;
}
fractions fractions::_div(const fractions& dr) const{
  fractions result{};
  result.arr[0] = arr[0] * dr.arr[1];
  result.arr[1] = arr[1] * dr.arr[0];
  return result;
}
fractions fractions::_reduce(fractions& res) const{
  fractions result{};
  if(res.arr[1] == 0)
    res.arr[0] = 0;
  if(res.arr[0] == 0)
    res.arr[1] =0;
  if(res.arr[0] >= res.arr[1])
    {
      if(res.arr[1] > 0){
	for(int i = res.arr[1]; i > 1; i--)
	  {
	    if(res.arr[0] % i == 0 && res.arr[1] % i == 0)
	      {
		res.arr[0] = res.arr[0] / i;
		res.arr[1] = res.arr[1] / i;
	      }
	  }
      }
      else{
	for(int i = res.arr[1]; i < -1; i++)
	  {
	    if(res.arr[0] % i == 0 && res.arr[1] % i == 0)
	      {
		res.arr[0] = res.arr[0] / (-i);
		res.arr[1] = res.arr[1] / (-i);
	      }
	  }
      }
    }
  
  if (res.arr[0] < res.arr[1])
    {
      if(res.arr[0] > 0)
	{
	  for(int i = res.arr[0]; i > 1; i--)
	    {
	      if(res.arr[0] % i == 0 && res.arr[1] % i == 0)
		{
		  res.arr[0] = res.arr[0] / i;
		  res.arr[1] = res.arr[1] / i;
		}
	    }
	}
      else{
	for(int i = res.arr[0]; i < -1; i++)
	  {
	    if(res.arr[0] % i == 0 && res.arr[1] % i == 0)
	      {
		res.arr[0] = res.arr[0] / (-i);
		res.arr[1] = res.arr[1] / (-i);
	      }
	  }
      }
    }
  return result; 
}
void fractions::_sravn(const fractions& dr) const{
  if(arr[1] * dr.arr[1] != 0){
    if ((arr[0] * dr.arr[1]) < (dr.arr[0] * arr[1])){
      std::cout << "Первая дробь меньше\n";
    }
    else if ((arr[0] * dr.arr[1]) > (dr.arr[0] * arr[1])){
      std::cout << "Первая дробь больше\n";
    }
    else{
      std::cout << "Дроби равны\n";
    }
  }
  else{
    if(arr[1] == dr.arr[1]){
      std::cout << "Дроби равны\n";
    }
    if(arr[1] == 0 && dr.arr[1] != 0){
      if(dr.arr[0] > 0)
	std::cout << "Первая дробь меньше\n";
      else
	std::cout << "Первая дробь больше\n";
    }
    if(arr[1] != 0 && dr.arr[1] == 0){
      if(arr[0] < 0)
	std::cout << "Первая дробь меньше\n";
      else
	std::cout << "Первая дробь больше\n";
    }
  }
}
