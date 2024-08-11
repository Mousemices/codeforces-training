#include <iostream>
#include <map>

using namespace std;

int main() {
    string guest_name, host_name, disordered_letters;

    cin >> guest_name >> host_name >> disordered_letters;

    map<char, int> letters;
    map<char, int>::iterator iterator;

    for (char character : guest_name) {
        letters[character]++;
    }

    for (char character : host_name) {
        letters[character]++;
    }

    for (char letter : disordered_letters) {
        if (letters.find(letter) != letters.end()) {
            letters[letter]--;
        }
    }

    bool canPermuted = true;
    iterator = letters.begin();

    if (guest_name.size() + host_name.size() == disordered_letters.size()) {
        while (iterator != letters.end() && canPermuted) {
            if (iterator->second != 0) {
                canPermuted = false;
            }

            iterator++;
        }
    } else {
        canPermuted = false;
    }

    if (canPermuted) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
