#include <iostream>
using namespace std;

int fibonnacci(int n);
int result;

int main ()
{
    int start=1;
    int end;
    cout << "End of sequence: ";
    cin >> end;
    fibonnacci(end);
    cout << "the fibonnacci sequence from " << start << " till " << end << " is " << fibonnacci;

    return (0);
}

int fibonnacci(int n)
{
    if (n<2)
    {
        return(n);
    }
    else
    {
        return ((fibonnacci(n-1) + fibonnacci(n-2)));
    }
}