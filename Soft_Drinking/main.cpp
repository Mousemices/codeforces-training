#include <iostream>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Toast = nl milliliters of the drink + a slice of lime + np grams of salt. How many toasts can make if all friends drink same amount?
    int number_of_toasts = 0;
    bool lack_of_materials = false;

    int total_milliliters = k * l;
    int total_limes_slices = c * d;
    int total_salt_grams = p;

    while (!lack_of_materials) {
        total_milliliters -= n * nl;
        total_limes_slices -= n;
        total_salt_grams -= n * np;

        if (total_milliliters < 0 || total_limes_slices < 0 || total_salt_grams < 0) {
            lack_of_materials = true;
        } else {
            number_of_toasts++;
        }
    }

    cout << number_of_toasts << endl;

    return 0;
}