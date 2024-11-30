#include <iostream>

using namespace std;

int main()
{
    int start_number, sum = 0;
    cout << "Enter start number: ";
    cin >> start_number;
    
    for (int i = start_number; i <= 500; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}