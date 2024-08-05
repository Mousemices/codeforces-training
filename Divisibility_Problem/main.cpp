#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main() {
    int t;
    long long a, b;
    
    cin >> t;

    int increment;
    int result;

    for (int i = 0; i < t; ++i) {
        cin >> a >> b;
        increment = 0;

        if (b > a) {
            result = b;
        }
        for (int j = 1; j <= INT_MAX; ++j) {
            if (b*j >= a) {
                increment = j;
                result = b*increment - a;
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
