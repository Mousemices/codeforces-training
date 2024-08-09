#include <iostream>
#include <set>

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

    set<char> unique_letters;

    for (char character : s) {
        unique_letters.insert(character);
    }

    if (unique_letters.size() == latin_letter_count) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
