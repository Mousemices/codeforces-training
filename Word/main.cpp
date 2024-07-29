#include <iostream>

using namespace std;

int main() {
    string s;

    cin >> s;

    // More uppercase in s -> Transform it all to uppercase
    // More lowercase in s -> Transform it all to lowercase
    // s contains an equal number of uppercase and lowercase -> Transform it all to lowercase

    int uppercase_counter = 0,  lowercase_counter = 0;

    for (char character : s) {
        if (isupper(character)) {
            uppercase_counter++;
        } else {
            lowercase_counter++;
        }
    }
    
    if (uppercase_counter != 0 || lowercase_counter != 0) {
        if (uppercase_counter > lowercase_counter) {
            for (char & character : s) {
                character = (char) toupper(character);
            }
        } else {
            for (char & character : s) {
                character = (char) tolower(character);
            }
        }
    }

    cout << s << endl;

    return 0;
}
