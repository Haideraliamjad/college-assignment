/*
@written by : Haider Ali Amjad
@title : Calculate the circumference and area of cube
*/
#include <iostream>
#define __PI__ 3.147
using namespace std;
int main()
{
    int radius;
    cout << "Enter the radius of cube " << endl;
    cin >> radius;
    cout << "circumference of cube is " << 4 * __PI__ * (radius * radius) << endl;
    cout << "area of cube is " << (4/3) * __PI__ * (radius * radius * radius) << endl;
    return 0;
}