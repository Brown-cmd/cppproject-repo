#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

// 1. user defined function //
/*int addition(int a,int b)
{
    return(a+b);
}
int subtract (int a,int b)
{
    return(a-b);
}
int multiply(int a,int b)
{
    return(a*b);
}
int division(int a,int b)
{
    return(a/b);
}
int main ()
{
    int result;
    int x,y;
    cout << "Enter number 1: ";
    cin >> x;
    cout << "Enter number 2: ";
    cin >> y;
        int choice;
        cout << "       OPERATION MENU       " << endl;
        cout << "============================" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Choose operator function: ";
        cin >> choice;
            switch (choice)
            {
            case 1:
                result=addition(x,y);
                cout << x << " + " << y << " = " << result;
                
                break;
            case 2:
                result=subtract(x,y);
                cout << x << " - " << y << " = " << result;
                
                break;
            case 3:
                result=multiply(x,y);
                cout << x << " x " << y << " = " << result;
                
                break;
            case 4:
                result=division(x,y);
                cout << x << " ÷ " << y << " = " << result;
                
                break;
            
            default:
                break;
            }
    

    return 0;
}
   */

/* // 2. built-in functions
int main ()
{
    //built-in function to calculate the power of a number raised to y 
 /* int x,y;
    int power;
    cout << "Enter the base: ";
    cin >> x;
    cout << "Enter the exponent: ";
    cin >> y;
    power = min(x,y);
    cout << x << " ^ " << y << " = " << power;
 */

 /* float x,y;
    int root;
    cout << "number: ";
    cin >> x;
    root = sqrt (x);
    cout << "the square root of " << x << " is " << root;
 */

  /*  int x,y,z;
    int minimum;
    cout << "Enter number 1: ";
    cin >> x;
    cout << "Enter number 2: ";
    cin >> y;
    cout << "Enter number 3: ";
    cin >> z;
    minimum = min(x,y);
    cout << "The minumium number is: " << minimum;
 
    

} 
    */
#include <iostream>
#include <string>
using namespace std;

// Global variables
string name;
double basic_salary, net_salary;
double transallowance, houseallowance, tax, hardshipallowance, gross_salary;

double calculatetransportallowance(double basic_salary)
{
    transallowance = ((5 * basic_salary) / 100);
    return(transallowance);
}

double calculatehouseallowance(double basic_salary)
{
    houseallowance = ((4 * basic_salary) / 100);
    return(houseallowance);
}

double calculatetax(double basic_salary)
{
    tax = ((30 * basic_salary) / 100);
    return(tax);
}

double calculatehardshipallowance(double basic_salary)
{
    hardshipallowance = ((3 * basic_salary) / 100);
    return(hardshipallowance);
}

double calculategrosssalary(double transallowance, double houseallowance, double hardshipallowance, double basic_salary)
{
    gross_salary = transallowance + houseallowance + hardshipallowance + basic_salary;
    return(gross_salary);
}

double calculatenetsalary(double gross_salary, double tax)
{
    net_salary = gross_salary - tax;
    return(net_salary);
}

void input()
{
    cout << "Employee name: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, name);
    cout << "Basic salary: ";
    cin >> basic_salary;
}

void output()
{
    cout << "\n--- Salary Breakdown ---" << endl;
    cout << "Employee: " << name << endl;
    cout << "Basic Salary: " << basic_salary << endl;
    cout << "Transport Allowance (5%): " << transallowance << endl;
    cout << "House Allowance (4%): " << houseallowance << endl;
    cout << "Hardship Allowance (3%): " << hardshipallowance << endl;
    cout << "Gross Salary: " << gross_salary << endl;
    cout << "Tax (30%): " << tax << endl;
    cout << "Net Salary: " << net_salary << endl;
}

int main()
{
    input();
    
    // Calculate all components
    calculatetransportallowance(basic_salary);
    calculatehouseallowance(basic_salary);
    calculatehardshipallowance(basic_salary);
    calculategrosssalary(transallowance, houseallowance, hardshipallowance, basic_salary);
    calculatetax(basic_salary); 
    calculatenetsalary(gross_salary, tax);
    
    output();
    return 0;
}