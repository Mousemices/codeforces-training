#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    string feeling = "I hate";

    if (n > 1) {
        for (int i = 0; i < n - 1; ++i) {
            if (i % 2 == 0) {
                feeling.append(" ").append("that I love");
            } else {
                feeling.append(" ").append("that I hate");
            }
        }
    }

    feeling.append(" ").append("it");

    cout << feeling << endl;

    return 0;
}
