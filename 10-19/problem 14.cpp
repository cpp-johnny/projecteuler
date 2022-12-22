#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<long long, int> m;

int main() {
  int max_len = 0;
  int ans = 0;
  for (int i = 2; i < 1000000; i++) {
    long long n = i;
    int len = 0;
    while (n != 1) {
      if (m.count(n)) {
        len += m[n];
        break;
      }
      len++;
      if (n % 2 == 0) n /= 2;
      else n = 3 * n + 1;
    }
    m[i] = len;
    if (len > max_len) {
      max_len = len;
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}
