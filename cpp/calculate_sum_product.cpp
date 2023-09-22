
#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3,num4;
    cout << "Enter the first number " << endl;
    cin >> num1;
    cout << "Enter the second number " << endl;
    cin >> num2;
    cout << "Enter the third number " << endl;
    cin >> num3;
    cout << "Enter the fourth number " << endl;
    cin >> num4;
    int sum = num1+num2+num3+num4;
    cout << "The sum of the numbers are " << sum << endl;
    cout << "The product of the numbers are " << num1*num2*num3*num4 << endl;
    cout << "The average of the numbers are " << (sum / 4) << endl;
    return 0;
}