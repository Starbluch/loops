#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    int x_number, y_number, result;
    
    cout << "Enter number x : ";
    cin >> x_number;
    cout << "Enter number y : ";
    cin >> y_number;

    result =  pow(x_number,y_number);
    cout << result <<endl;
    
    return 0;
}
