#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t, n, a;

    cin >> t;

    vector<int> candies;
    int alice, bob, weight_grams_one, weight_grams_two, half_weight, total_weight;

    for (int i = 0; i < t; ++i) {
        cin >> n;

        alice = 0, bob = 0, weight_grams_one = 0, weight_grams_two = 0, half_weight = 0, total_weight = 0;

        for (int j = 0; j < n; ++j) {
            cin >> a;
            if (a == 1) {
                weight_grams_one++;
            } else {
                weight_grams_two++;
            }
        }

        total_weight = weight_grams_one + weight_grams_two * 2;

        if (total_weight % 2 != 0) {
            cout << "NO" << endl;
        } else {
            half_weight = total_weight / 2;
            bob = min(half_weight / 2, weight_grams_two);
            half_weight -= bob * 2;

            if (half_weight <= weight_grams_one) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
