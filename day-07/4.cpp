//if a number is prime or not 
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    cout << isPrime(5) << "\n";   // Outputs: 1
    cout << isPrime(10) << "\n";  // Outputs: 0
}
