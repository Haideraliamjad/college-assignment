#include <iostream>
using namespace std;
int main()
{
    int one,two,three;
    cout << "Enter the first number \n";
    cin >> one;
    cout << "Enter the second number \n";
    cin >> two;
    cout << "Enter the third number \n";
    cin >> three;
    if (one < two && one < three)
    {
        cout << one;
    }else if (two < one && two < three)
    {
        cout << two;
    }else if (three < one && three < two)
    {
        cout << three;
    }

    return 0;
}