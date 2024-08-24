#include <iostream>

using namespace std;

bool character_in_string(char c, const string &word);

int main() {
    int t;
    char c;
    
    cin >> t;

    bool appeared;

    for (int i = 0; i < t; ++i) {
        cin >> c;

        appeared = character_in_string(c, "codeforces");

        if (appeared) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

bool character_in_string(char c, const string &word) {
    bool exists = false;
    int index = 0;

    while (!exists && index < word.size()) {
        if (word[index] == c) {
            exists = true;
        } else {
            index++;
        }
    }

    return exists;
}
