#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Inpuu number \n";
    cin >> number;
    if(number % 2 == 0)
    {
        cout << "Number is even";
    }else 
    {
        cout << "Number is odd";
    }
    return 0;
}