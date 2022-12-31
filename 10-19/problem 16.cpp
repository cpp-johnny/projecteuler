#include <iostream>
#include <vector>

using namespace std;

vector<int> multiply(vector<int> a, int b) {
  // Multiply a by b, storing the result in a.
  // The result may have more digits than a, so we need to
  // use a vector to store it.
  int carry = 0;
  for (int i = 0; i < a.size(); i++) {
    int result = a[i] * b + carry;
    a[i] = result % 10;
    carry = result / 10;
  }
  while (carry > 0) {
    a.push_back(carry % 10);
    carry /= 10;
  }
  return a;
}

int main() {
  vector<int> number{1};  // Initialize the number to be 1.
  for (int i = 0; i < 1000; i++) {
    number = multiply(number, 2);  // Multiply the number by 2.
  }

  // Calculate the sum of the digits.
  int sum = 0;
  for (int digit : number) {
    sum += digit;
  }

  cout << sum << endl;
  return 0;
}
