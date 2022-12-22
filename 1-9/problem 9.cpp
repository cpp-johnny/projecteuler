#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// Iterate through all possible values of a and b
	for (int a = 1; a < 1000; ++a) {
		for (int b = a + 1; b < 1000; ++b) {
			// Compute c based on the Pythagorean theorem
			int c = 1000 - a - b;

			// Check if a, b, and c form a Pythagorean triplet
			if (a*a + b*b == c*c) {
				// Compute the product abc and print it
				int product = a * b * c;
				cout << "The product is: " << product << endl;
				return 0;
			}
		}
	}

	return 0;
}

