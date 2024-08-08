#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    string letters;

    getline(cin, letters);

    set<char> distinct_letters;

    for (int i = 1; i < letters.size() - 1; ++i) {
        distinct_letters.insert(letters[i]);
        i += 2;
    }

    cout << distinct_letters.size() << endl;

    return 0;
}
