#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m, n;

    cin >> m >> n;

    double result = floor((double) (m * n) / 2);

    int result_in_integer = (int) result;

    cout << result_in_integer << endl;

    return 0;
}
