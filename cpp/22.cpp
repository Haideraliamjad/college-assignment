#include <iostream>
using namespace std;
void print()
{
    cout << "vowel" << endl;
}
int main()
{
    char alpa;
    cin >> alpa;
    swicht(alpa)
    {
        case 'a':
            print();
        break;
        case 'e':
            print();
        break;
        case 'i':
            print();
        break;
        case 'o':
            print();
        break;
        case 'u':
            print();
        break;
        default :
            cout << "Constant" << endl;
    }
    return 0;
}