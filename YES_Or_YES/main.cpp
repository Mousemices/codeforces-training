#include <iostream>
#include <string>

using namespace std;

bool in_yes_rule(string word);

int main() {
    int t, index = 0;
    string s;

    cin >> t;

    bool is_valid_word;

    while (index < t) {
        cin >> s;

        is_valid_word = in_yes_rule(s);

        if (is_valid_word) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        index++;
    }

    return 0;
}

bool in_yes_rule(string word) {
    // pre-condition: word is a string of length 3(From question)

    if (tolower(word[0]) == 'y' && tolower(word[1]) == 'e' && tolower(word[2]) == 's') {
        return true;
    }

    return false;
}
