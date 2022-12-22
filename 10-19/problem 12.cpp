#include <iostream>
#include <cmath>

int main() {
  // start with the first triangle number
  int triangle = 1;
  // keep track of the current number we are adding to the triangle number
  int current = 2;

  // keep going until we find a triangle number with over 500 divisors
  while (true) {
    // check the number of divisors of the triangle number
    int divisors = 2; // 1 and the triangle number itself are always divisors
    int limit = (int)sqrt(triangle);
    for (int i = 2; i <= limit; i++) {
      if (triangle % i == 0) {
        divisors += 2;
      }
    }
    // if we have found a triangle number with over 500 divisors, print it and exit
    if (divisors > 500) {
      std::cout << triangle << std::endl;
      return 0;
    }

    // add the next number to the triangle number and increment the current number
    triangle += current;
    current++;
  }

  return 0;
}
