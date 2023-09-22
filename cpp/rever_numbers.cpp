
#include <iostream>
using namespace std;
int main() {
    int digits[3];
    cout << "Enter three digits, one at a time:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Digit " << i + 1 << ": ";
        cin >> digits[i];
    }


    cout << "Digits in reverse order:\n";
    for (int i = 2; i >= 0; --i) {
        cout << digits[i] << " ";
    }


    return 0;
}
