#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;


// use Sieve of Eratosthenes as it is more optimised and faster
// Function to find the sum of all primes below a given number
long long sumPrimes(int limit)
{
    // Create a boolean array "prime[0..n]" and
    // initialize all entries it as true.
    // A value in prime[i] will finally be
    // false if i is Not a prime, else true.
    bool prime[limit + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= limit; p++)
    {
        // If prime[p] is not changed, then it is
        // a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i = p * 2; i <= limit; i += p)
                prime[i] = false;
        }
    }

    // Initialize the sum to 0
    long long sum = 0;

    // Add all the prime numbers
    for (int p = 2; p <= limit; p++)
        if (prime[p])
            sum += p;

    return sum;
}

int main()
{
    // Set the upper limit
    int limit = 2000000;

    cout << "The sum of all primes below " << limit << " is " << sumPrimes(limit) << endl;

    return 0;
}
