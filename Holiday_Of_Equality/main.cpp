#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    long long n, a, s = 0, max = LLONG_MIN;
    vector<long long> burles;

    cin >> n;

    for (long long i = 0; i < n; ++i) {
        cin >> a;

        burles.push_back(a);

        if (a > max) {
            max = a;
        }
    }

    for (int i = 0; i < burles.size(); ++i) {
        if (burles[i] < max) {
            s += max - burles[i];
        }
    }


    cout << s << endl;

    return 0;
}
