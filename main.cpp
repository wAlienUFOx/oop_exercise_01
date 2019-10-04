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
  sum._reduce(sum);
  std::cout << "Сумма\n";
  sum._write(std::cout);
  fractions raz = f._sub(f1);
  raz._reduce(raz);
  std::cout << "Разность\n";
  raz._write(std::cout);
  fractions pro = f._mult(f1);
  pro._reduce(pro);
  std::cout << "Произведение\n";
  pro._write(std::cout);
  fractions del = f._div(f1);
  del._reduce(del);
  std::cout << "Частное\n";
  del._write(std::cout);
  f._sravn(f1);
 
}
