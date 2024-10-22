/*
## Problem
You have been given a positive integer N. You need to find and print the
Factorial of this number. The Factorial of a positive integer N refers to the
product of all number in the range from 1 to N. You can read more about the
factorial of a number here.

#### Input Format:
The first and only line of the input contains a single integer N denoting the
number whose factorial you need to find.

#### Output Format
Output a single line denoting the factorial of the number N.

#### Constraints
$$ 1 \leq N \leq 10 $$
*/

#include <iostream>
// #include <stdio.h>

/*
int factorialRecursive(int x){
   if(x==0){
      return 1;
   }else if(x==1){
      return 1;
   }else{
      return x*factorial(x-1);
   }
   return 0;
}
*/

int factorial(int num) {
  int ans = 1;
  if (num < 2) {
    ;
  } else {
    for (int i = 1; i <= num; ++i) {
      ans = ans * i;
    }
  }
  return ans;
}

int main(int argc, char *argv[]) {
  int num;
  // std::scanf("%d", &num);
  // std::printf("%d\n", factorial(num));
  std::cin >> num;
  std::cout << factorial(num) << '\n';
  return 0;
}
