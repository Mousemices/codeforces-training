#include <iostream>

int last_digit(int number);

using namespace std;

int main() {
    int k, r;

    cin >> k >> r;

    int minimum_shovels_to_buy = 1;
    bool without_change = false;
    int ith = 2, total_price_to_pay = k;

    while(!without_change) {
        if (total_price_to_pay % 10 == 0) {
            without_change = true;
        } else if (last_digit(total_price_to_pay) == r) {
            total_price_to_pay -= r;
            without_change = true;
        } else {
            total_price_to_pay = k * ith;
            ith++;
            minimum_shovels_to_buy++;
        }
    }

    cout << minimum_shovels_to_buy << endl;

    return 0;
}

int last_digit(int number) {
    return number % 10;
}
