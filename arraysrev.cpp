#include <iostream> 
using namespace std;

int n, target, count = 0;
void array_size()
{
    
    cout<< "Enter array size: ";
    cin >> n;

}


int array_entry(int n)
{
    int array[n];
    cout << "Enter " << n << " numbers to be in the array" << endl;
    for (int i = 0; i <= n; i++)
    {
        cin >> array[i];
        i++;
    }
}

int array_count(int target)
{
    for (int i = 0; i < n; i++)
    {
        int array[n];
        if (array[i] = target)
        {
            count++;
        }
        
    }
}

int main ()
{
    

    array_size();
    array_entry(n);

    cout << "Enter number to check for recurrence: ";
    cin >> target;
    
    array_count(target);

    cout << "The number " << target << " appears " << count << " times in the array"; 
    
    return 0;
    
}