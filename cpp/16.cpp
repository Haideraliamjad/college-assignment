#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    if (number == 0)
        cout << "Number is zero" << endl;
    else if (number > 0)
        cout << "Number is positive" << endl;
    else if (number < 0)
        cout << "Number is negative" << endl;
    return 0;
}