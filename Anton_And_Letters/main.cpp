#include <iostream>
#include <vector>

using namespace std;

int main() {
    string letters;

    getline(cin, letters);

    vector<char> distinct_letters;
    char letter;
    bool exists;
    int index;

    for (int i = 1; i < letters.size() - 1; ++i) {
        letter = letters[i];
        exists = false;
        index = 0;

        while (!exists && index < distinct_letters.size()) {
            if (distinct_letters[index] == letter) {
                exists = true;
            }
            index++;
        }

        if (!exists) {
            distinct_letters.push_back(letter);
        }

        i += 2;
    }

    cout << distinct_letters.size() << endl;

    return 0;
}
