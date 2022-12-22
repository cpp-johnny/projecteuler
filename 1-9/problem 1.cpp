#include <iostream>

using namespace std;

int main() {
  int sum = 0; // Initialize the sum to 0

  // Iterate through all numbers from 1 to 1000
  for (int i = 1; i < 1000; i++) {
    // If the number is a multiple of 3 or 5, add it to the sum
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }

  // Print the sum
  cout << sum << endl;

  return 0;
}
