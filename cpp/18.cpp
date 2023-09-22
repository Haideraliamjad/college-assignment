#include <iostream>
using namespace std;

int main() {
    double salary;
    cout << "Enter your salary: ";
    cin >> salary;
    if (salary >= 20000) {
        salary -= 0.07 * salary;
    } else if (salary >= 10000) {
        salary -= 1000;
    }
    cout << "Net salary: " << salary << endl;

    return 0;
}
