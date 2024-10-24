/*
A number satisfies Goldbach's property if it can be written as the sum of two
prime numbers. Define a function that determines whether a natural number
satisfies this property. (from ND)
*/

#include <cmath>
#include <iostream>

int es_primo(int n) {
  int esprimo = 1;
  for (int i = 2; i <= sqrt(n); ++i) {
    if (n % i == 0) {
      esprimo = 0;
    }
  }
  return esprimo;
}

int goldbach(int n, int x) {
  if (n >= x) {
    if (es_primo(n) && es_primo(x)) {
      std::cout << "n: " << n;
      std::cout << " x: " << x << '\n';
    }
    goldbach(n - 1, x + 1);
  }
  return 0;
}

int main() {
  std::cout << goldbach(100, 0);
  return 0;
}
