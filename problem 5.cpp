#include <iostream>

using namespace std;

int main() {
  // Start at 2520, since it is the smallest number that is divisible by 1-10
  int num = 2520;

  // Keep looping until a number is found that is divisible by 1-20
  while (true) {
    bool divisible = true;

    // Check if num is divisible by all numbers from 1 to 20
    for (int i = 1; i <= 20; i++) {
      if (num % i != 0) {
        divisible = false;
        break;
      }
    }

    // If num is divisible by all numbers from 1 to 20, print the result and exit the loop
    if (divisible) {
      cout << num << endl;
      break;
    }

    // Increment num and continue the loop
    num++;
  }

  return 0;
}
