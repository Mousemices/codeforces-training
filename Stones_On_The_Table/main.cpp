#include <iostream>

using namespace std;

int main() {
    int n;
    string s;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        string c;
        cin >> c;
        s.append(c);
    }

    char current_stone_color;
    char next_stone_color;
    int count = 0;

    for (int i = 0; i < s.size(); ++i) {
        if (i + 1 < s.size()) {
            current_stone_color = s.at(i);
            next_stone_color = s.at(i + 1);
            if (current_stone_color == next_stone_color) {
                s.erase(i+1, 1);
                count++;
                i = i - 1;
            }
        }
    }

    cout << count << endl;

    return 0;
}
