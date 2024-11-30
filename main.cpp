#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    if (number < 0)
    {
        int swap;
        number = number * -1;
    }
    
    for (int i = 0; i <= number; i++)
    {
        cout << i << endl;
    }
    
    return 0;
}
