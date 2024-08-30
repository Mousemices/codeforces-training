#include <iostream>

using namespace std;

int main() {
    int t;
    string word, result;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> word;

        if (word == "abc") {
            result = "YES";
        } else {
            if (word == "cba" || word == "acb" || word == "bac") {
                result = "YES";
            } else {
                result = "NO";
            }
        }

        cout << result << endl;
    }

    return 0;
}
