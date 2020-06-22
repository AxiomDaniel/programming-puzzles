#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  int SIEVE_BOUND = 1000001; // Add one to remove 0 indexing.
  bool sieve[SIEVE_BOUND];
  set<long long> t_prime;
  long tmp;

  fill_n(sieve, SIEVE_BOUND, true);
  
  // Compute sieve of Eratosthenes
  sieve[0] = sieve[1] = false;

  for (int i = 2; i < SIEVE_BOUND; i++) {
    if (sieve[i]) {
      k = i*2;
      while (k < SIEVE_BOUND) {
        sieve[k] = false;
        k += i;
      }
    }
  }

  // Compute T-primes
  for (int i = 2; i < SIEVE_BOUND; i++) {
    if (sieve[i]) {
      t_prime.insert(pow(i,2));
    }
  }
  
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    cout << (t_prime.count(tmp) == 1 ? "YES" : "NO") << "\n";
  }
}

// Heuristic: T-prime can only be made by the square of prime number.
// Which is kind of intuitive: any prime has 2 divisors, 1 and itself.
// Square the number and technically you're not adding any new divisor except for itself.
// Example: 7 is a prime. 7**2 = 49
// You can divide 49 by 7, which will yield 7 (duh, its squared).
// The other two divisors will be 1 and itself.
// Note: I'm not convinced, but I guess it'll do.