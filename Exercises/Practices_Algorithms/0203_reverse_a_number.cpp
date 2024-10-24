/* Reverse a 4 or N digits number */

#include <iostream>

int invierte_numero(int numero) { // N digits
  int aux{0};
  while (numero > 0) {
    aux = aux * 10 + numero % 10;
    numero = numero / 10;
  }
  return aux;
}

int invierte_numero_fijo(int number) { // for 4 digits only
  int aux{0};
  aux = number % 10;
  number = number / 10;
  aux = aux * 10 + number % 10;
  number = number / 10;
  aux = aux * 10 + number % 10;
  number = number / 10;
  aux = aux * 10 + number % 10;
  return aux;
}

int main(int argc, char *argv[]) {
  int number{0};
  std::printf("Enter a number of 4 digits\n");
  std::scanf("%d", &number);
  std::printf("%d\n", invierte_numero_fijo(number));
  return 0;
}
