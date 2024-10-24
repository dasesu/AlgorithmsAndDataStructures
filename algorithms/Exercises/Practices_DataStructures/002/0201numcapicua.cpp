/*
Design a recursive algorithm that generates all possible n-digit palindrome
numbers that can be formed with the digits 1, 2, and 3.
*/

#include <stdio.h>

int num[3] = {1, 2, 3};
int arN[5] = {0, 0, 0, 0, 0};
int N = 5;
int aux = 0;

bool escapicua(int array[5], int N) {
  bool diferente = false;
  for (int i = 0; i < N / 2; i++) {
    if (array[i] != array[N - i - 1]) {
      diferente = true;
    }
  }
  return !diferente;
}

void imprime() {
  for (int i = 0; i < 5; i++) {
    printf("%d ", arN[i]);
  }
  printf("\n");
}

void capicua(int pdeN) {
  int I = 0;
  while (I < 3) {
    if (pdeN < N / 2 + 1) {
      arN[pdeN] = num[I];
      arN[N - pdeN - 1] = num[I];
      if (pdeN == N / 2) {
        imprime();
      }
      capicua(pdeN + 1);
    }
    I = I + 1;
  }
}

int main() {
  capicua(0);
  return 0;
}
