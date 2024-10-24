/*
Write a recursive function to calculate the greatest common divisor of two
given integers by applying the recursive properties. Considering that:

If a > b then m.c.d.(a,b) = m.c.d.(a-b,b)
If a < b then m.c.d.(a,b) = m.c.d.(a,b-a)
If a = b then m.c.d.(a,b) = m.c.d.( b,a) = a = b
*/

#include <stdio.h>

int mcd(int A, int B, int K) {
  if (K > B || K > A) {
    return 1;
  } else {
    if (A % K == 0 && B % K == 0) {
      return K * mcd(A / 2, B / 2, K);
    } else {
      return mcd(A, B, K + 1);
    }
  }
}

int mcd(int A, int B) { return mcd(A, B, 2); }

int main() {
  printf("%d\n", mcd(5, 8));
  return 0;
}
