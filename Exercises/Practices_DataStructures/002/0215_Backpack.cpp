/*
Suppose we want to store things in a backpack, but the backpack can only carry
a maximum weight and if we were to store all the objects we would exceed the
maximum weight that the backpack can hold. Because of this we must choose the
objects according to their weight, always trying to carry as much as possible
in the backpack. The objects have to fit whole inside the backpack, they cannot
be broken, so either they fit whole or they don't fit at all. Implement a
solution to the backpack problem using backtracking.
*/

#include <stdio.h>

int A[10] = {1, 2, 4, 5, 6, 3, 5, 6, 51, 1};
int maximo = 0;
int contador = 0;

int mochila(int capacidad, int paso) {
  int k = paso;
  while (k < 10) {
    if (contador + A[k] <= capacidad) {
      contador = contador + A[k];
      if (contador > maximo) {
        maximo = contador;
      }
      mochila(capacidad, paso + k);
      contador = contador - A[k];
    }
    k++;
  }
  return 0;
}

int main() {
  printf("%d\n", mochila(53, 0));
  printf("%d\n", maximo);
  return 0;
}
