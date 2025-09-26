#include <iostream>
using namespace std;

int main()
{
    // declare variables
    string name = "Tom";
    int num1 = 24;
    int num2 = 30;
    int answer;
    int* a;
    int* b;
    string* c;
    a = &num1;
    b = &num2;
    c = &name;

    answer= *a + *b;
    cout << *c << " your total score is = " << answer << endl;

    

    

    return(0);
}