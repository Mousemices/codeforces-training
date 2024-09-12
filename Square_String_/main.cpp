#include <iostream>

using namespace std;

int main() {
    int t;

    cin >> t;

    string word;
    int size;

    for (int i = 0; i < t; ++i) {
        cin >> word;

        size = word.size();

        if (size % 2 == 0 && word.substr(0, size / 2) == word.substr(size / 2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
