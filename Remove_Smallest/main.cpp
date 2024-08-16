#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n, a;

    cin >> t;

    vector<int> elements;

    for (int i = 0; i < t; ++i) {
        cin >> n;
        for (int j = 0; j < n; ++j) {
            cin >> a;
            elements.push_back(a);
        }

        // Sorting
        for (int j = 0; j < elements.size(); ++j) {
            for (int k = j + 1; k < elements.size(); ++k) {
                if (elements[k] < elements[j]) {
                    int auxiliary = elements[k];
                    elements[k] = elements[j];
                    elements[j] = auxiliary;
                }
            }
        }

        int index = 0;

        while (index < elements.size() - 1) {
            if (elements[index+1] - elements[index] == 0 || elements[index+1] - elements[index] == 1) {
                elements.erase(elements.begin() + index);
            } else {
                index++;
            }
        }

        if (elements.size() == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        elements.clear();
    }

    return 0;
}
