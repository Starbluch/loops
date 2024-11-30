#include <iostream>

using namespace std;

int main()
{
    int number_1, number_2;
    int suma = 0;
    cout << "Enter number 1: ";
    cin >> number_1;
    cout << "Enter number 2: ";
    cin >> number_2;

    for (int i = number_1; i <= number_2; i++)
    {
        suma = suma + i;
        cout << suma << ' ';
    }
    cout << "\nresult: " << suma << endl;
    
    return 0;
}