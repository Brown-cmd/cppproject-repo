#include <iostream>
using namespace std;

int factorial(int a)
{
    if (a==0 || a==1)
    {
        return 1;
    }
    else
    {
        return (a * factorial(a-1));
    }
    
}
int main ()
{
    int n;
    int result;
    cout << "Enter number n: ";
    cin >> n;
        result = factorial(n);
        cout << "Factorial of " << n << " is " << result;
}