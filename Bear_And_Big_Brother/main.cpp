#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    int years = 0;
    bool isLarger = false;

    while (!isLarger) {
        if (a > b) {
            isLarger = true;
        } else {
            a *= 3;
            b *= 2;
            years++;
        }
    }

    cout << years << endl;

    return 0;
}
