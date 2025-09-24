#include <iostream>
using namespace std;

int sumOdd(int start, int end) {
    if (start > end) {
        return 0;
    }
    if (start % 2 != 0) {
        return start + sumOdd(start + 1, end);
    } else {
        return sumOdd(start + 1, end);
    }
}

int sumEven(int start, int end) {
    if (start > end) {
        return 0;
    }
    
    if (start % 2==0) {
        return start + sumEven(start + 1, end);
    } else {
        return sumEven(start + 1, end);
    }
}

int countOdd(int start, int end) {
    if (start > end) {
        return 0;
    }
    
    if (start % 2!= 0) {
        return 1 + countOdd(start+1, end);
    } else {
        return countOdd(start+1, end);
    }
}

int countEven(int start, int end) {
    if (start > end) {
        return 0;
    }
    
    if (start % 2 == 0) {
        return 1 + countEven(start + 1, end);
    } else {
        return countEven(start + 1, end);
    }
}

int main() {
    int start, end;
    
    cout << "=== Recursive Sum and Average Calculator ===" << endl;
    cout << "Enter the range:" << endl;
    cout << "Start: ";
    cin >> start;
    cout << "End: ";
    cin >> end;
    

    if (start > end) {
        cout << "Error: Start should be less than or equal to end!" << endl;
        return 1;
    }
    
    int oddSum = sumOdd(start, end);
    int evenSum = sumEven(start, end);
    
    int oddCount = countOdd(start, end);
    int evenCount = countEven(start, end);
    
    cout << "\n=== RESULTS ===" << endl;
    cout << "Range: " << start << " to " << end << endl;
    cout << "\nODD NUMBERS:" << endl;
    cout << "Sum: " << oddSum << endl;
    if (oddCount > 0) {
        cout << "Average: " << (double)oddSum / oddCount << endl;
    } else {
        cout << "Average: No odd numbers in range" << endl;
    }
    cout << "Count: " << oddCount << endl;
    
    cout << "\nEVEN NUMBERS:" << endl;
    cout << "Sum: " << evenSum << endl;
    if (evenCount > 0) {
        cout << "Average: " << (double)evenSum / evenCount << endl;
    } else {
        cout << "Average: No even numbers in range" << endl;
    }
    cout << "Count: " << evenCount << endl;
    
    return 0;
}
