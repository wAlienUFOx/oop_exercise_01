#include <iostream>
#include "fraction.h"

int main() {
  fractions f;
  fractions f1;
  std::cout << "Введите первую дробь\n";
  f._read(std::cin);
  std::cout << "Введите вторую дробь\n";
  f1._read(std::cin);
  std::cout << "Первая дробь\n";
  f._write(std::cout);
  std::cout << "Вторая дробь\n";
  f1._write(std::cout);
  fractions sum = f._add(f1);
  std::cout << "Сумма\n";
  sum._write(std::cout);
  fractions raz = f._sub(f1);
  std::cout << "Разность\n";
  raz._write(std::cout);
  fractions pro = f._mult(f1);
  std::cout << "Произведение\n";
  pro._write(std::cout);
  fractions del = f._div(f1);
  std::cout << "Частное\n";
  del._write(std::cout);
  int r = f._sravn(f1);
  if (r == -1)
    std::cout << "Первая дробь меньше\n";
  else if (r == 1)
    std::cout << "Первая дробь больше\n";
  else
    std::cout << "Дроби равны\n";
}
