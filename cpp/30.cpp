#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int result = 1;
    while(number > 1)
    {
        result = result * number;
        number--;
    }
    cout << result << endl;
    return 0;
}