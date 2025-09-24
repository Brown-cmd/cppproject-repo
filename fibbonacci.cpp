#include <iostream>
using namespace std;

int fibonnacci (int n)
{
    if (n <= 0)
    {
        return (0);
    }
    if (n <= 1)
    {
        return(1);
    }
    else
    {
        return{(fibonnacci(n-1) + fibonnacci(n-2))};
    }
    
}


int main ()
{
    int start;
    int end;
    cout << "Enter the start of the sequence: ";
    cin >> start;
    cout << "End of sequence: ";
    cin >> end;
    fibonnacci(end);
    cout << "the fibonnacci sequence from " << start << " till " << end << " is " << fibonnacci;

    return (0);
}