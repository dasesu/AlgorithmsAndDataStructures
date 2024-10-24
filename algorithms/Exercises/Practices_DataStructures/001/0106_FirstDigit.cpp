/*
Escriba una función recursiva que permita hallar el primer dígito de un número
N dado
*/

#include <stdio.h>

int primerdigito(int N) {
  if (N > 0 && N < 10) {
    return N;
  } else {
    return primerdigito(N / 10);
  }
}

int main() {
  printf("%d\n", primerdigito(74393526));
  return 0;
}
