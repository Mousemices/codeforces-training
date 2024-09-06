#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a(4);
    string s;
    int totalCalories = 0;

    for (int &i : a) {
        cin >> i;
    }

    cin >> s;

    int index;

    for (char character : s) {
        index = (int) character - '0';
        totalCalories += a[index - 1];
     }

    cout << totalCalories << endl;

    return 0;
}
