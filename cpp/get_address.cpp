
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name,address;
    int age;
    cout << "Enter your name" << endl;
    cin >> name;
    cout << "Enter your age" << endl;
    cin >> age;
    cout << "Enter your address" << endl;
    cin.ignore();
    getline(cin,address);
    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << endl;
    cout << "Your address is " << address << endl;
    return 0;
}