#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;

        vector<int> numbers(n);
        int even = 2, odd = 1, sum_even = 0, sum_odd = 0;

        for (int j = 0; j < n / 2; ++j) {
            numbers[j] = even;
            sum_even += even;
            even += 2;
        }

        int one_quarter_of_n = n / 4;

        if (n % 4 > 0) {
            one_quarter_of_n++;
        }

        for (int j = n / 2; j < n; ++j) {
            if (j >= n / 2 + one_quarter_of_n) {
                sum_odd += odd + 2;
                numbers[j] = odd + 2;
            } else {
                sum_odd += odd;
                numbers[j] = odd;
            }

            odd += 2;
        }

        if (sum_even == sum_odd) {
            cout << "YES" << endl;

            for (int number : numbers) {
                cout << number << " ";
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
