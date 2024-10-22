/*
Write an algorithm that prints on the screen the border of a square with sides
of size N. For example, if N = 5, the algorithm should print:
XXXXX
X   X
X   X
X   X
XXXXX
*/

#include <iostream>

int main() {
  int borde{0};
  printf("Introduzca el tamano del borde: ");
  scanf("%d", &borde);

  for (int j = 0; j < borde; j++) {
    if (j != 0 && j != borde - 1) {
      for (int i = 0; i < borde; i++) {
        if (i == 0 || i == borde - 1) {
          printf("#");
        } else {
          printf(" ");
        }
      }
    } else {
      for (int i = 0; i < borde; i++) {
        printf("#");
      }
    }
    printf("\n");
  }
  return 0;
}
