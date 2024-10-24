/*
Write an algorithm that prints the values of all dominoes without repeating
*/

#include <iostream>

    int
    main(int argc, char *argv[]) {

  for (int j = 0; j < 7; j++) {
    for (int i = 0; i < 7; i++) {
      std::cout << j << ':' << i << "\n";
    }
  }

  return 0;
}
