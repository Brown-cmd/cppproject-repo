#include <iostream>
using namespace std;

int main ()
{
    int i,j;
    cout << "Enter rows: ";
    cin >> i;
    
    
    for (int m = 1; m <= i; m++)
    {
        /* code */
        for (int l = 1; l <= i - m; l++)
        {
            cout << " "; 
        }
        for (int n = 1; n <= 2 * m-1; n++)
        {
            /* code */
            cout << "*";
        }
        
        cout << "\n";
        
    }
    
}