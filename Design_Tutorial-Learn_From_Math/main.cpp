#include <iostream>

bool is_prime_number(int n);

using namespace std;

int main() {
    int n;

    cin >> n;

    // Find the all different ways to decompose n as sum of two integer. Check each of them is not a prime number

    int first, second;
    bool iterable = true;

    first = n / 2;
    second = n % 2 == 0 ? n / 2 : n / 2 + 1;

    while (iterable && first + second == n) {
        if (!is_prime_number(first) && !is_prime_number(second)) {
            iterable = false;
        } else {
            if (first - 1 != 1 && second + 1 != n) {
                first--;
                second++;
            }
        }
    }

    cout << first << " " << second << endl;

    return 0;
}

bool is_prime_number(int n) {
    // n > 1
    int index = 2;
    bool is_prime = true;

    while (is_prime && index < n) {
        if (n % index == 0) {
            is_prime = false;
        }

        index++;
    }

    return is_prime;
}
