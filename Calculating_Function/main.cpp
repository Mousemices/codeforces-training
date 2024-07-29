#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;

    cin >> n;

    long long result;

    // Time limit exceeded (1000ms) with large values of n
    /*for (int i = 1; i <= n ; ++i) {
        result += pow(-1, i) * i;
    }*/

    if(n % 2 == 0) {
        result = n / 2;
    } else {
        result = -(n + 1) / 2;
    }

    cout << result << endl;

    return 0;
}
