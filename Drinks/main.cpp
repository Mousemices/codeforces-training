#include <iostream>

using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    double p[n];

    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    double result = 0.0;
    double percentage;

    for (int i = 0; i < n; ++i) {
        percentage = (double) p[i] / 100;
        result += percentage;
    }

    result /= n;
    result *= 100;

    cout << result << endl;
    
    return 0;
}
