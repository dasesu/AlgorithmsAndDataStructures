/*
Create a recursive function that finds the sum of the first N odd numbers.
*/

#include <stdio.h>

int Nimpares(int N, int num, int s, int suma) {
  if (s >= N) {
    return suma;
  } else {
    if (num % 2 != 0) {
      s = s + 1;
      suma = suma + num;
      return Nimpares(N, num + 1, s, suma);
    } else {
      return Nimpares(N, num + 1, s, suma);
    }
  }
}

int main() {
  // for example number 7
  printf("%d\n", Nimpares(7, 0, 0, 0));
  return 0;
}
