
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    int helper;
    cout << "The value of a before swapping is " << a << endl;
    cout << "The value of b before swapping is " << b << endl;
    helper = a;
    a = b;
    b = helper;
    cout << "The value of a after swapping is " << a << endl;
    cout << "The value of b after swapping is " << b << endl;
    return 0;
}