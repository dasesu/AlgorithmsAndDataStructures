/*
Write an algorithm that, given a number, recursively prints the sequence of
integers until reaching that number.
*/

#include <iostream>

int imprime_numeros2(int n) {
  if (n >= 0) {
    imprime_numeros2(n - 1);
    std::cout << n << " ";
  }
  return 0;
}

int imprime_numeros(int n) {
  if (n >= 0) {
    std::cout << n << " ";
    imprime_numeros(n - 1);
  }
  return 0;
}

int main(int argc, char *argv[]) {

  imprime_numeros2(5);

  return 0;
}
