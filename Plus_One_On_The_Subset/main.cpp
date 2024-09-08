#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    long long t, n, ith, maximum = LLONG_MIN, minimum = LLONG_MAX;
    vector<long long> a;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;

        for (int j = 0; j < n; ++j) {
            cin >> ith;

            if (ith > maximum) {
                maximum = ith;
            }

            if (ith < minimum) {
                minimum = ith;
            }

            a.push_back(ith);
        }

        cout << maximum - minimum << endl;

        maximum = LLONG_MIN, minimum = LLONG_MAX;
        a.clear();
    }

    return 0;
}
