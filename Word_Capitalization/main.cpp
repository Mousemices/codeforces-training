#include <iostream>

using namespace std;

int main() {
    string word;

    cin >> word;

    word.at(0) = (char) toupper(word.at(0));

    cout << word;

    return 0;
}
