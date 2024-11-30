#include <iostream>
using namespace std;

int main()
{
    int result;
    int SUM = 0;
    
    for (int i = 0 ; i <= 1000; i++)
    {
        SUM += i;
    }
    result = SUM / 1000;
    cout << "Result: " << result << endl;
}

