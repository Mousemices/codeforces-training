#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int numbers_of_days_to_wear_different_socks, numbers_of_days_can_wear_same_socks;
    int minimum = min(a, b), maximum = max(a, b);

    numbers_of_days_to_wear_different_socks = minimum;
    int socks_left = maximum - minimum;
    numbers_of_days_can_wear_same_socks = socks_left / 2;

    cout << numbers_of_days_to_wear_different_socks << " " << numbers_of_days_can_wear_same_socks << endl;

    return 0;
}
