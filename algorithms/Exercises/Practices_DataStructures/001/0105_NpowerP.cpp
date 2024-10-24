/*
Given N and P, write a recursive function that calculates N^p.
*/
#include <stdio.h>

float potencia(int N, float X) {

  if (N == 0) {
    return 1;
  } else {
    if (N > 0 && N != 0) {
      if (N % 2 == 0) {
        return potencia(N / 2, X * X);
      } else {
        return X * potencia(N - 1, X);
      }
    }
  }
}

int main() {

  printf("%f\n", potencia(5, 5));
  return 0;
}
