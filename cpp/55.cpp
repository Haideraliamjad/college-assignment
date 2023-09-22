#include <iostream>
using namespace std;
int main()
{
    int width = 5;
    for(int i=0;i<=width;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}