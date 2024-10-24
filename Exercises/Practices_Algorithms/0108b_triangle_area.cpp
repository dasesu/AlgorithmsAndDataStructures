/* Calculate the area of a triangle */

#include <iomanip>
#include <iostream>

int main(int argc, char *argv[]) {
  // the base and height of a triangle are asked
  float base{0.0};
  float altura{0.0};
  // std::printf("Enter the base of the triangle\n");
  // scanf("%f\n", &base);
  std::cout << "Enter the base of the triangle\n";
  std::cin >> base;

  // std::printf("Enter the height of the triangle\n");
  // std::scanf("%f\n", &altura);
  std::cout << "Enter the height of the triangle\n";
  std::cin >> altura;

  float area{base * altura / 2};
  // std::printf("The area of the triangle is: %.2f\n", area);
  std::cout << "The area of the triangle is: \n"
            << std::fixed << std::setprecision(2) << area << '\n';

  return 0;
}
