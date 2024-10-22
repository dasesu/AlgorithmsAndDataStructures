/*Calculate the roots of a second degree polynomial*/

#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <math.h>

int main(int argc, char *argv[]) {
  int a{0};
  int b{0};
  int c{0};

  if (argc > 1) {
    // argv[0]: program name,
    // argv[1]: first coefficient
    // argv[2]: second coefficient
    // argv[3]: third coefficient
    if (argc < 3) {
      // std::printf("Missing information: enter polynomial coefficients\n");
      std::cout << "Missing information: enter polynomial coefficients\n";
      exit(1);
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    if (a == 0) {
      std::cout << "First coefficient must be non-zero";
      exit(1);
    }

  } else {
    // std::printf("Enter first coefficient: ");
    // std::scanf("%d", &a );
    std::cout << "Enter first coefficient: ";
    std::cin >> a;
    if (a == 0) {
      // std::printf("First coefficient must be non-zero");
      std::cout << "First coefficient must be non-zero";
      exit(1);
    }
    // std::printf("Enter second coefficient:");
    // scanf("%d", &b );
    std::cout << "Enter second coefficient:";
    std::cin >> b;

    // std::printf("Enter third coefficient:");
    std::cout << "Enter third coefficient:";
    // scanf("%d", &c );
    std::cin >> c;
  }

  float aux{0.0};
  float x1{0.0};
  float x2{0.0};

  // std::printf("%.2f\n", std::sqrt(b) );
  // std::printf("%.2f\n", std::pow(b, 2) );

  aux = std::pow(b, 2) - 4 * (a * c);

  if (aux < 0) {
    float partreal{0.0};
    float partimg{0.0};
    partreal = -1 * b;
    partimg = std::sqrt(-1 * aux);
    std::cout << "x1 = (" << partreal << " + " << std::setprecision(2)
              << partimg << "i )/" << 2 * a << '\n';
    std::cout << "x2 = (" << partreal << " - " << std::setprecision(2)
              << partimg << "i )/" << 2 * a << '\n';
  } else {
    x1 = (-1 * b) + std::sqrt(aux);
    x1 = x1 / (2 * a);
    std::cout << "x1 = " << std::setprecision(2) << x1 << '\n';

    x2 = (-1 * b) - std::sqrt(aux);
    x2 = x2 / (2 * a);
    std::cout << "x2 = " << std::setprecision(2) << x2 << '\n';
  }
  return 0;
}
