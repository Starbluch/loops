#include <iostream>
using namespace std;

int main()
{
    int number_1, number_2;
    cout << "Enter number 1: ";
    cin >> number_1;
    cout << "Enter number 2: ";
    cin >> number_2;

    if (number_1>number_2)
    {
        int swap;
        swap = number_1;
        number_1 = number_2;
        number_2 = swap;
    }

    cout <<  "\nAll numbers in the range: \t\t";
    for (int i = number_1; i <= number_2; i++)
    {
        cout << i << " ";
    }

    cout <<  "\nOutput all even numbers in the range: \t";
    for (int i = number_1; i <= number_2; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    
    cout <<  "\nOutput all odd numbers in the range: \t";
    for (int i = number_1; i <= number_2; i++)
    {

        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    
    cout <<  "\nOutput all numbers that are multiples of 7: ";
    for (int i = number_1; i <= number_2; i++)
    {

        if (i % 7 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
