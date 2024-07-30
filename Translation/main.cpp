#include <iostream>

using namespace std;

int main() {
    string t, s;

    cin >> t >> s;

    bool hasError = false;
    bool hasSameLength = false;
    int index = 0;
    int index_from_last = t.length() - 1;

    if(t.length() == s.length()) {
        hasSameLength = true;
        while (!hasError && index < t.length()) {
            if (t.at(index) != s.at(index_from_last)) {
                hasError = true;
            } else {
                index++;
                index_from_last--;
            }
        }
    }

    string result;

    if (hasSameLength) {
        if (!hasError) {
            result.append("YES");
        } else {
            result.append("NO");
        }
    } else {
        result.append("NO");
    }

    cout << result << endl;
    
    return 0;
}
