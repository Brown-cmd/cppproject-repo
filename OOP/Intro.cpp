#include <iostream>
using namespace std;

class student
    {
        public:

        int id;
        string name;
        int exam1;
        int exam2;
        double total;
        double avg;
        char grade;
        
    };

int main ()
{
    class student s[5];

    for (int i = 0; i < 5; i++)
    {
        
        cout << "Enter student ID: ";
        cin >> s[i].id;
        cout << "Enter student name: ";
        cin >> s[i].name;
        
    }
    
    for (int i = 0; i < 5; i++)
    {
        /* code */
    cout << s[i].id << "     " << s[i].name << endl;
    }

    return 0;
}