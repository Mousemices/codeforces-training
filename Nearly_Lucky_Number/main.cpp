#include <iostream>

using namespace std;

int main() {
    long long n;

    cin >> n;

    long long last_digit;
    long long lucky_four = 4, lucky_seven = 7;
    long long lucky_number_counter = 0;

    while (n > 0 && lucky_number_counter <= 7) {
        last_digit = n % 10;

        if (last_digit == lucky_four || last_digit == lucky_seven) {
            lucky_number_counter++;
        }

        n /= 10;
    }

    if (lucky_number_counter == lucky_four || lucky_number_counter == lucky_seven) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
