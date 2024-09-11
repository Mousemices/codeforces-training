#include <iostream>
#include <set>

using namespace std;

int main() {
    int t, n;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n;

        string task(n, ' ');
        set<char> letters;

        for (int j = 0; j < n; ++j) {
            cin >> task[j];
        }

        char character;
        bool distracted = false;

        for (int j = 0; j < task.size(); ++j) {
            character = task[j];

            if (letters.find(character) == letters.end()) {
                letters.insert(character);
            } else {
                if (j > 0 && task[j] != task[j - 1]) {
                    distracted = true;
                    break;
                }
            }
        }

        if (!distracted) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        letters.clear();
    }

    return 0;
}
