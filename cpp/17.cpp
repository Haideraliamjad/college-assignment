#include <iostream>
using namespace std;
void print(char grade)
{
    cout << "The grade is " << grade << endl;
}
int main()
{
    int grade;
    cin >> grade;
    if (grade >= 90)
    {
        print('A');
    }
    else if (grade >= 80 && grade < 90)
    {
        print('B');
    }
    else if (grade >= 70 && grade < 79)
    {
        print('C');
    }
    else if (grade >= 60 && grade < 69)
    {
        print('D');
    }else if (grade < 60)
    {
        print('F');
    }
    return 0;
}