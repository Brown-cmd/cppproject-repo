#include <iostream>
using namespace std;

double addition(double a, double b)
{
    return(a+b);
}
double subtraction(double a, double b)
    {
        return(a-b);
    }

double addition(double a, double b);
double subtraction(double a, double b);
int main ()
{
    double x,y;
    double result,result2;
    cout << "Enter number 1: ";
    cin >> x;
    cout << "Enter number 2: ";
    cin >> y;
    result = addition(x,y);
    result2 = subtraction(x,y);
    cout << x << " + " << y << " = " << result << endl;
    cout << x << " - " << y << " = " << result2;
}
