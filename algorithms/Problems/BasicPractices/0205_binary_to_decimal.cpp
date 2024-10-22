/* Convert a binary number to decimal */

#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::string binario{""};
  std::printf("Enter a binary number: ");
  std::getline(std::cin >> std::ws, binario);
  int binsize{static_cast<int>(binario.length())}; // length

  int decimal{0};
  int i = 0;

  for (i = 0; i < binsize; i++) {
    if (binario[binsize - i - 1] == '1') {
      decimal = decimal + static_cast<int>(std::pow(2, i));
    }
  }
  std::printf("%s => %d\n", binario.c_str(), decimal);

  return 0;
}
