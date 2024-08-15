#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    vector<int> x;
    vector<int>::iterator it;
    int a, b, c, value, index, maximum = INT_MIN;

    for (int i = 0; i < 4; ++i) {
        cin >> value;
        x.push_back(value);

        if (x[i] > maximum) {
            maximum = x[i];
            index = i;
        }
    }

    x.erase(x.begin() + index);

    // Save results in arbitrary order
    a = x[1] + x[2] - maximum;
    b = x[0] + x[2] - maximum;
    c = x[0] + x[1] - maximum;

    cout << a << " " << b << " " << c;

    return 0;
}
