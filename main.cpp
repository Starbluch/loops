#include <iostream>

using namespace std;

int main()
{
    int number;
    int suma = 0;
    for (;;)
    {
        cout << "Enter number: ";
        cin >> number;
        suma += number;
        
        if (number == 0)
        {
            break;
        }
    }
    cout << suma << endl;
    return 0;
}