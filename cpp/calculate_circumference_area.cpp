
#include <iostream>
#define __PI__ 3.147
using namespace std;
int main()
{
    int radius;
    cout << "Enter the radius of the circle" << endl;
    cin >> radius;
    int area = __PI__ * (radius * radius);
    cout << "The area of circle is " << area << endl;
    int circumference = 2 * (__PI__ * radius);
    cout << "The circumference of a circle is " << circumference << endl;
    return 0;
}