#include <iostream>
using namespace std;

int main()
{
    int result, number;
    int sum = 1;
    cout << "Enter number: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Enter a number with a plus value" << endl;
        exit(0);
    }
    
    for (int i = number;  i <= 20; i++)
    {
        sum *= i;
    }
    cout << sum << endl;
}

