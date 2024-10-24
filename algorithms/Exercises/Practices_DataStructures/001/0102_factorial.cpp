/*
Write a function that calculates the factorial of an integer.
*/

#include <stdio.h>

int factorial(int num) {
  if (num == 0) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}

int main() {
  printf("%d\n", factorial(5));
  return 0;
}
