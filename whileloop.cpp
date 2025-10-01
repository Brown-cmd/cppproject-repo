#include <iostream>
using namespace std;

int main ()
{
    int numbers = 45678;
    int revnumbers = 0;
    
    while (numbers)
    {
        revnumbers = revnumbers * 10 + numbers % 10;
        numbers /= 10;
    }

    cout << revnumbers;

    return 0;
}