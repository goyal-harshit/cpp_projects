#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true; // 2 is the only even prime number
    if (number % 2 == 0) return false; // eliminate even numbers

    for (int i = 3; i <= sqrt(number); i += 2) {
        if (number % i == 0) return false;
    }
    return true;
}

// Function to find all prime numbers between 1 and a given number
vector<int> findPrimes(int limit) {
    vector<int> primes;
    for (int i = 1; i <= limit; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int limit;

    // Get the input value from the user
    cout << "Enter the upper limit to find prime numbers: ";
    cin >> limit;

    // Find all prime numbers up to the given limit
    vector<int> primes = findPrimes(limit);

    // Print the prime numbers
    cout << "Prime numbers between 1 and " << limit << " are: ";
    for (int prime : primes) {
        cout << prime << ", ";
    }
    cout << endl;

    return 0;
}
