#include <iostream>
#include <cmath> // for the pow function

using namespace std;

int main() {
  int sum_of_squares = 0;
  int square_of_sum = 0;

  // Iterate through the first 100 natural numbers
  for (int i = 1; i <= 100; i++) {
    sum_of_squares += pow(i, 2); // add the square of i to the sum of squares
    square_of_sum += i; // add i to the sum
  }

  square_of_sum = pow(square_of_sum, 2); // square the sum

  // Calculate and print the difference between the sum of squares and the square of the sum
  int difference = square_of_sum - sum_of_squares;
  cout << difference << endl;

  return 0;
}
