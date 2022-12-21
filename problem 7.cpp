#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;

  int i = 5;
  while (i * i <= n) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
    i += 6;
  }

  return true;
}

int main() {
  int count = 0;
  int i = 2;
  while (count < 10001) {
    if (is_prime(i)) {
      count++;
    }
    i++;
  }

  cout << i - 1 << endl;

  return 0;
}
