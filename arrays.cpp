#include <iostream>
using namespace std;

int main () 
{
    int sum=0;
    int avg;
    /*declare array called marks*/
    int marks[5];
        for (int i = 0; i < 5; i++)
        {
            /* code */
            cout << "ENter exam mark: ";
            cin >> marks[i];
            sum = sum + marks[i];
        }
         for (int i = 0; i < 5; i++)
         {
            /* code */
            cout << "marks [" << i << "] = " << marks[i] << endl;
         }
        avg = sum/2;
        cout << "Your total marks = " << sum << endl;
        cout << "Average marks = " << avg;


        
        


    return 0;
}