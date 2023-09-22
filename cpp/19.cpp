#include <iostream>
#define __PI__ 3.147
using namespace std;
int main()
{
    int choice , radius;
    cin >> choice;
    switch(choice)
    {
        case 1:
            cout << "Input radius \n";
            cin >> radius;
            cout << __PI__ * (radius * radius);
            break;
        case 2:
             cout << "Input radius \n";
            cin >> radius;
            cout << 2 * __PI__ * (radius);
            break;
        default:
            cout << "Invalid condition";
    }
    return 0;
}