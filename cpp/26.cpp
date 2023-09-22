#include <iostream>
using namespace std;
int main()
{
    int number = 2;
    // cin >> number; 
    int i = 1;
    while(i <= 10)
    {
        cout << number << " * " << i << " = " << number * i << endl;
        i++;
    }
    return 0;
}