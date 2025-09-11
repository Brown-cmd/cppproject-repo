#include <iostream>
using namespace std;

int main() {
    int pin;
    int chances=3;
    int PIN=1234;
    int choice;

    while (chances > 0)
    {
        cout << "Enter PIN: ";
        cin >> pin;
        cout << "======================================" << endl;

        if (pin == PIN)
        {
            /* code */
            cout << "Welcome to ABC Bank" << endl;
            cout << "======================================" << endl;
            cout << "1. Deposit Cash" << endl;
            cout << "2. Withdraw Cash" << endl;
            cout << "3. Show balance" << endl;
            cout << "4. Transfer Cash" << endl;
            cout << "5. Exit" << endl;
            cout << "====================================== " << endl;
            cout << "choose (1-5): " << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
                /* code */
                cout << "You have selected deposit cash" << endl;
                break;
            case 2:
                cout << "You have selected withdraw cash" << endl ; 
                break;
            case 3:
                cout << "Your balance will be shown shortly" << endl;
                break;
            case 4:
                cout << "To which bank do you wish to transfer money to?" << endl;
                break;
            case 5: 
                cout << "Thank you for choosing ABC  bank" << endl;
                break;
            
            default:
                cout << "invalid choice choose an number from 1-5" << endl;
                break;
            }
        

        }
        else
        {
            chances--;
              if (chances > 0)
              {
               cout << "Wrong PIN. Try Again." << endl;
               cout << "Try Again. You have " << chances << " remaining" << endl;
              }
              else
              {
                cout << "You have exhausted your chances please visit a branch to unlock your account" << endl;
              }
        }
        
        
    }
    


    return 0;
}
