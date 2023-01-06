#include <iostream>
#include <string>

using namespace std;

int main() {
  string prev = "1";
  string curr = "1";

  int index = 2; // The first two Fibonacci numbers are already accounted for
  while (curr.size() < 1000) {
    string next = curr;
    curr += prev;
    prev = next;
    ++index;
  }

  cout << index << endl;
  return 0;
}
