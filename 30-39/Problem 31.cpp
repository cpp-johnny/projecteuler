#include <iostream>
#include <vector>

using namespace std;

int main() {
  // The values of the coins, in pence
  vector<int> coins{1, 2, 5, 10, 20, 50, 100, 200};

  // The target amount of money, in pence
  const int target = 200;

  // The number of ways to make target using 0, 1, 2, ..., target pence
  vector<long long> ways(target + 1, 0);
  ways[0] = 1; // There is 1 way to make 0 pence using 0 coins

  // For each coin value
  for (int coin : coins) {
    // For each amount of money
    for (int i = coin; i <= target; ++i) {
      // The number of ways to make i pence using at least 1 of this coin
      // is equal to the number of ways to make (i - coin) pence using
      // any number of coins, plus the number of ways to make i pence
      // using only coins of smaller values
      ways[i] += ways[i - coin];
    }
  }

  cout << ways[target] << endl;
  return 0;
}
