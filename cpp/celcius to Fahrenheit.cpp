
#include <iostream>
using namespace std;
int main()
{
    int celcius;
    cout << "Enter the value in celcius";
    cin >> celcius;
    cout << "Temprature in fahrenhiet is " << (((9/5) * celcius) + 32) << endl;
    return 0;
}