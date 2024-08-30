#include <iostream>

using namespace std;

int main() {
    int t;
    const string target = "abc";
    string word, result;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> word;

        if (word == "abc") {
            result = "YES";
        } else {
            int mismatch_count = 0;

            for (int j = 0; j < 3; ++j) {
                if (word[j] != target[j]) {
                    mismatch_count++;
                }
            }

            if (mismatch_count == 2) {
                result = "YES";
            } else {
                result = "NO";
            }
        }

        cout << result << endl;
    }

    return 0;
}
