#include <iostream>
using namespace std;

int main()
{
    int operand1 , operand2;
    char operator;
    switch(operator)
    {
        case '+':
            cout << operand1 + operand2 << endl;
        break;
        case '-':
            cout << operand1 - operand2 << endl;
        break;
        case '*':
            cout << operand1 * operand2 << endl;
        break;
        case '/':
            cout << operand1 / operand2 << endl;
        break;
        case '%'
            cout << operand1 % operand2 << endl;
        break;
        default :
        cout << "invalid operator";
    }
    return 0;
}