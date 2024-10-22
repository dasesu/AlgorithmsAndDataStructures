/*
Given the values V1, V2 that form a closed interval, and a value X, make an algorithm to determine whether X is inside or outside the interval.
*/
#include <iostream>

int main(int argc, char *argv[]) {
  float inferior{0.0};
  float superior{0.0};
  std::cout << "Introduzca limite inferior: ";
  std::cin >> inferior;
  std::cout << "Introduzca limite superior del intervalo: ";
  std::cin >> superior;

  float x{0.0};
  std::cout << "Introduzca el valor a consultar: ";
  std::cin >> x;

  if (x >= inferior && x <= superior) {
    std::cout << "El numero pertenece al intervalo\n";
  } else {
    std::cout << "NO pertenece al intervalo\n";
  }

  return 0;
}
