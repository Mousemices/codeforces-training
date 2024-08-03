#include <iostream>

using namespace std;

int main() {
    string input_a, input_b;

    cin >> input_a >> input_b;

    string output(input_a.length(), ' ');

    for (int i = 0; i < input_a.length(); ++i) {
        if(input_a[i] != input_b[i]) {
            output[i] = '1';
        } else {
            output[i] = '0';
        }
    }

    cout << output << endl;

    return 0;
}
