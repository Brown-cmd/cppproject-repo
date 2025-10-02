#include <iostream>
#include <iomanip>
using namespace std;

class student
    {
        public:

        int adm;
        string name;
        int exam1;
        int exam2;
        double total;
        double avg;
        char grade;
        
    };

int main ()
{
    int n;
    class student s[80];     //an array object of type class student
    cout << "Number of students(max 80): ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        
        cout << "Enter student admission no. : ";
        cin >> s[i].adm;
        cout << "Enter student name: ";
        cin >> s[i].name;
        cout << "Enter Exam 1 results: ";
        cin >> s[i].exam1;
        cout << "Enter Exam 2 results: ";
        cin >> s[i].exam2;

        s[i].total= s[i].exam1 +  s[i].exam2;
        s[i].avg = s[i].total/2;

        if (s[i].avg < 40)
        {
            s[i].grade = 'F';
        }
        else if (s[i].avg < 50)
        {
            s[i].grade = 'D';
        }
        else if (s[i].avg < 60)
        {
            s[i].grade = 'C';
        }
        else if (s[i].avg < 70)
        {
            s[i].grade = 'B';
        }
        else
        {
            s[i].grade = 'A';
        }
        
    }
    
    cout << "================================================================="<<endl;
    cout << "Adm no.    " << "name      " << "exam 1    " << "Exam 2    " << "total    " << "Average    " << "Grade" << endl;
    cout << "================================================================="<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        
    cout << s[i].adm << setw(10) << s[i].name << setw(10) << s[i].exam1 << setw(10) << s[i].exam2 << setw(10) << s[i].total << setw(10) << s[i].avg << setw(10) << s[i].grade<< endl;
    }

    return 0;
}