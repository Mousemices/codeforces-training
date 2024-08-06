#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    string s(n, ' ');
    char c;
    
    const int latin_letter_count = 26;
    
    for (int i = 0; i < n; ++i) {
       cin >> c;
       s[i] = (char) tolower(c);
    }

    vector<char> unique_letters;

    for (char character : s) {
        int is_unique = true;
        for (char unique_letter : unique_letters) {
            if (unique_letter == character) {
                is_unique = false;
            }
        }

        if (is_unique) {
            unique_letters.push_back(character);
        }
    }

    if (unique_letters.size() == latin_letter_count) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
