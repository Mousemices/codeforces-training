#include <iostream>

bool is_next_prime_number(int n, int m);

bool is_prime(int m);

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    bool is_next_prime = is_next_prime_number(n, m);

    if (is_next_prime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

bool is_next_prime_number(int n, int m) {
    int next_prime_number = n + 1;
    bool found_next_prime_number = false;

    while (!found_next_prime_number) {
        if (is_prime(next_prime_number)) {
            found_next_prime_number = true;
        } else {
            next_prime_number++;
        }
    }

    return next_prime_number == m;
}

bool is_prime(int m) {
    bool is_prime_number = true;
    int divisor = m - 1;

    while (is_prime_number && divisor >= 2) {
        if (m % divisor == 0) {
            is_prime_number = false;
        } else {
            divisor--;
        }
    }

    return is_prime_number;
}
