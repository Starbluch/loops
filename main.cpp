#include <iostream>
using namespace std;

int main()
{
    
    int variant, result;

    for (;;)
    {
        cout << "Enter variant: ";
        cin >> variant;
        
        if (variant == 0)
        {
            break;
        }
        
        for (int i = 1; i <=10; i++)
        {
            result = variant * i;
            cout << variant << " * " << i << " = " << result << endl;
        }
    }
    
}

