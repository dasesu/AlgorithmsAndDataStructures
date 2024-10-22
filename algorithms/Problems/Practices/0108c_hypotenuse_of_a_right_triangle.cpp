/* Calculate the hypotenuse of a right triangle */

#include <cmath>
#include <iomanip>
#include <iostream>

int main(int argc, char *argv[]) {
  float leg1{0.0};
  float leg2{0.0};

  // std::printf("Enter leg 1:");
  // std::scanf("%f", &leg1);
  std::cout << "Enter leg 1:";
  std::cin >> leg1;

  // std::printf("Enter leg 2:");
  // std::scanf("%f", &leg2);
  std::cout << "Enter leg 2:";
  std::cin >> leg2;

  // The square of the length of the hypotenuse equals the sum of the squares
  // of the lengths of the legs of the right triangle
  float hypotenuse{0.0};

  hypotenuse = std::pow(leg1, 2) + std::pow(leg2, 2);
  hypotenuse = std::sqrt(hypotenuse);
  // std::printf("The hypotenuse is: %.2f", hypotenuse);
  std::cout << "The hhypotenuse is: " << std::fixed << std::setprecision(2)
            << hypotenuse << '\n';

  return 0;
}
