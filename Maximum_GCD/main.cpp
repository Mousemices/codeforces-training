#include <iostream>
#include <vector>

int gcd_maximum_single_value(int a, int b);

using namespace std;

int main() {
    int t, n;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;

        int current_maximum_divisor = 0, divisor;

        for (int a = 1; a < n; ++a) {
            for (int b = a + 1; b <= n; ++b) {
                divisor = gcd_maximum_single_value(a, b);

                if (divisor > current_maximum_divisor) {
                    current_maximum_divisor = divisor;
                }
            }
        }

        cout << current_maximum_divisor << endl;
    }

    return 0;
}

int gcd_maximum_single_value(int a, int b) {
    vector<int> a_factors;
    vector<int> b_factors;

    for (int i = 1; i <= a; ++i) {
        if (a % i == 0) {
            a_factors.push_back(i);
        }
    }

    for (int i = 1; i <= b; ++i) {
        if (b % i == 0) {
            b_factors.push_back(i);
        }
    }

    for (int i = 0; i < a_factors.size(); ++i) {
        for (int j = i; j < a_factors.size(); ++j) {
            if (a_factors[j] > a_factors[i]) {
                int auxiliary = a_factors[j];
                a_factors[j] = a_factors[i];
                a_factors[i] = auxiliary;
            }
        }
    }

    for (int i = 0; i < b_factors.size(); ++i) {
        for (int j = i; j < b_factors.size(); ++j) {
            if (b_factors[j] > b_factors[i]) {
                int auxiliary = b_factors[j];
                b_factors[j] = b_factors[i];
                b_factors[i] = auxiliary;
            }
        }
    }

    int greatest_common_divisor = 1;
    bool has_inner_common_divisor = false;

    for (int i = 0; i < a_factors.size(); ++i) {
        for (int j = 0; j < b_factors.size(); ++j) {
            if (a_factors[i] == b_factors[j]) {
                greatest_common_divisor = a_factors[i];
                has_inner_common_divisor = true;
            }

            if (has_inner_common_divisor) {
                break;
            }
        }
    }

    return greatest_common_divisor;
}
