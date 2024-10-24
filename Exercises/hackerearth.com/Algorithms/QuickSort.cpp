/*
You have been given an array A of size N.This array contains integers ranging
from 1 to 10^9. You need to sort the contents of this array by their value and
then print the contents of it.

Input Format:
The first line contains a single integers N denoting the size of the array. The
next line contains N space separated integers denoting the contents of the
array.

Output Format:

Print N space separated integers, i.e. the final sorted array.

Constraints:
1 ≤ N ≤ 10^6
1 ≤ A[i] ≤ 10^9

Sample Input:
5
4 3 1 5 2

Sample Output:
1 2 3 4 5

https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/tutorial/

*/
#include <iostream>
using namespace std;

long long partition(long long A[], long long start, long long end) {
  long long pIndex = start;
  long long pivot = A[end];

  for (long long i = start; i < end; i++) {
    if (A[i] <= pivot) {
      swap(A[i], A[pIndex]);
      pIndex++;
    }
  }
  swap(A[pIndex], A[end]);
  return pIndex;
}

void quicksort(long long A[], long long start, long long end) {
  if (start < end) {
    // int random = start + rand( )%(end-start +1 ) ;
    // swap ( A[random] , A[end]); //swap pivot with last element.
    long long pIndex = partition(A, start, end);
    quicksort(A, start, pIndex - 1);
    quicksort(A, pIndex + 1, end);
  }
}

int main(int argc, char *argv[]) {
  long long num{0};
  scanf("%lld\n", &num);

  long long A[num] =
      {}; // lo mismo que crear un for(int i=0;i<tam;i++){ A[i] = 0; }

  for (long long i = 0; i < num; i++) {
    scanf("%lld", &A[i]);
    // printf("%d ", A[i]);
  }

  quicksort(A, 0, num - 1);

  for (long long i = 0; i < num; i++) {
    printf("%lld ", A[i]);
  }

  return 0;
}
