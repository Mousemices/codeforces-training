#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string username;
    vector<char> distinct_characters;

    cin >> username;

    distinct_characters.reserve(username.length());

    for (char character : username) {
        auto it = find(distinct_characters.begin(), distinct_characters.end(), character);

        // it != distinct_characters.end() -> Found
        // it == distinct_characters.end() -> Not found
        if (it == distinct_characters.end()) {
            distinct_characters.push_back(character);
        }
    }

    string output;
    if (distinct_characters.size() % 2 == 0) {
        output = "CHAT WITH HER!";
    } else {
        output = "IGNORE HIM!";
    }

    cout << output << endl;

    return 0;
}
