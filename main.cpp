#include <iostream>
#include "fraction.h"

int main() {
  fractions f;
  fractions f1;
  std::cout << "Введите первую дробь\n";
  for(int i = 0; i < 2; i++)
    f.set(i);
  std::cout << "Введите вторую дробь\n";
  for(int i = 0; i < 2; i++)
    f1.set(i);
  std::cout << "Первая дробь\n";
  for(int i = 0; i < 2; i++)
    {
      std::cout << f.get(i);
      if(i < 1)
	std:: cout << '/';
    }
  std::cout << "\n";
  std::cout << "Вторая дробь\n";
  for(int i = 0; i < 2; i++)
    {
      std::cout << f1.get(i);
      if(i < 1)
	std:: cout << '/';
    }
  std::cout << "\n";
  fractions sum = f._add(f1);
  sum._reduce(sum);
  std::cout << "Сумма\n";
  for(int i = 0; i < 2; i++)
    {
      std::cout << sum.get(i);
      if(i < 1)
	std:: cout << '/';
    }
  std::cout << "\n";
  fractions raz = f._sub(f1);
  raz._reduce(raz);
  std::cout << "Разность\n";
  for(int i = 0; i < 2; i++)
    {
      std::cout << raz.get(i);
      if(i < 1)
	std:: cout << '/';
    }
  std::cout << "\n";
  fractions pro = f._mult(f1);
  pro._reduce(pro);
  std::cout << "Произведение\n";
  for(int i = 0; i < 2; i++)
    {
      std::cout << pro.get(i);
      if(i < 1)
	std:: cout << '/';
    }
  std::cout << "\n";
  fractions del = f._div(f1);
  del._reduce(del);
  std::cout << "Частное\n";
  for(int i = 0; i < 2; i++)
    {
      std::cout << del.get(i);
      if(i < 1)
	std:: cout << '/';
    }
  std::cout << "\n";
  f._sravn(f1);
 
}
