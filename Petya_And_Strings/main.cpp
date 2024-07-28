#include <iostream>

using namespace std;
int main() {
    string first, second;

    cin >> first;
    cin >> second;

    char lowercase_for_first;
    char lowercase_for_second;

    for (int i = 0; i < first.length(); ++i) {
        lowercase_for_first = (char) tolower(first[i]);
        lowercase_for_second = (char) tolower(second[i]);
        first.at(i) = lowercase_for_first;
        second.at(i) = lowercase_for_second;
    }

    if (first == second) {
        cout << "0";
    } else if (first.compare(second) < 0) {
        cout << "-1";
    } else {
        cout << "1";
    }

    return 0;
}
