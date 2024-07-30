#include <iostream>

using namespace std;

int main() {
    int n;
    string s;
    char a = 'A';
    char d = 'D';

    cin >> n >> s;

    int a_counter = 0, d_counter = 0;

    for (char character : s) {
        if (character == a) {
            a_counter++;
        } else {
            d_counter++;
        }
    }

    string winner;

    if (a_counter > d_counter) {
        winner.append("Anton");
    } else if (a_counter < d_counter) {
        winner.append("Danik");
    } else {
        winner.append("Friendship");
    }

    cout << winner << endl;

    return 0;
}
