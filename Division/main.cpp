#include <iostream>

using namespace std;

int main() {
    int rating, t, x;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> rating;

        if (1900 <= rating) {
            x = 1;
        } else if (1600 <= rating && rating <= 1899) {
            x = 2;
        } else if (1400 <= rating && rating <= 1599) {
            x = 3;
        } else {
            x = 4;
        }

        cout << "Division " << x << endl;
    }

    return 0;
}
