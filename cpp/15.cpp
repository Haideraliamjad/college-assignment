#include <iostream>
using namespace std;
int main()
{
    int salary , grade , bonous;
    cout << "Input Salary \n";
    cin >> salary;
    cout << "Input grade \n";
    cin >> grade;
    if(grade > 15)
    {   
        bonous = 50;
    }else if (grade <= 15)
    {
        bonous = 25;
    }
    cout total_salary = (bonous / 100) * salary;
    cout << total_salary << endl;
    return 0;
}