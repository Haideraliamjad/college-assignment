#include <iostream>
using namespace std;
int main()
{
    int temp;
    cin >> temp;
    if (temp > 35)
    {
        cout << "Hot day 🔥";
    }
    else if (temp >= 25 && temp <= 35)
    {
        cout << "Pleasent day 😇";
    }else if (temp < 25)
    {
        cout << "Cold day 🥶";
    }
    return 0;
}