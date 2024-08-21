#include <iostream>

using namespace std;

int main() {
    string borze_code, decoded;

    cin >> borze_code;

    for (int i = 0; i < borze_code.size(); ++i) {
        if(borze_code[i] == '.') {
            decoded.push_back('0');
        } else {
            if (i + 1 < borze_code.size()) {
                if (borze_code.substr(i, 2) == "-.") {
                    decoded.push_back('1');
                }

                if(borze_code.substr(i, 2) == "--") {
                    decoded.push_back('2');
                }

                i += 1;
            }
        }
    }

    cout << decoded << endl;

    return 0;
}
