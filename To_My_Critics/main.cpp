#include <iostream>

using namespace std;

int main() {
    int t, a, b, c;
    string output;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> c;

        if (a + b >= 10) {
            output = "YES";
        } else if (b + c >= 10) {
            output = "YES";
        } else if (a + c >= 10) {
            output = "YES";
        } else {
            output = "NO";
        }

        cout << output << endl;
    }

    return 0;
}
