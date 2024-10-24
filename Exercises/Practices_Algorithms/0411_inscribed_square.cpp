/*

Write an algorithm that prints on the screen the border of odd-sized squares
from N to 1 inserted one inside the other. For example, if N = 7 and N = 9 it
should print:

XXXXXXX   XXXXXXXXX
X     X   X       X
X XXX X   X XXXXX X
X X X X   X X   X X
X XXX X   X X X X X
X     X   X X   X X 
XXXXXXX   X XXXXX X
          X       X
          XXXXXXXXX

*/

#include <iostream>

int dibuja1(int lado) {
  if (lado % 2 != 0) {
    for (int j = 0; j < lado; j++) {
      for (int i = 0; i < lado; i++) {
        if (j % 2 == 0) {
          if (i % 2 == 0) {
            printf("#");
          } else {
            // i%2!=0
            if ((i > j && i < lado - j) || (i < j && i >= lado - j)) {
              printf("#");
            } else {
              printf(" ");
            }
          }
        } else {
          // j%2 != 0
          if (i % 2 == 0) {
            if ((j > i && j < lado - i) || (i > j && j >= lado - i)) {
              printf("#");
            } else {
              printf(" ");
            }
          } else {
            printf(" ");
          }
        }
      }
      printf("\n");
    }
  } else {
    printf("El numero debe ser impar");
  }
  return 0;
}

int main() {
  int lado{0};
  printf("Introduzca el tamano del cuadrado (impar): ");
  scanf("%d", &lado);
  dibuja1(lado);

  return 0;
}
