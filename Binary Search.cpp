//Sanskriti Khairnar
//PRN-24070123054
//Batch-A2
//Experiment 20

#include <iostream>
using namespace std;

int main() {
    int array[10] = {2,3,4,6,22,77,78,88,90,100}; 
    int target;
    int low = 0, high = 9;
    bool found = false;

    cout << "Enter a number to search: ";
    cin >> target;

    while(low <= high) {
        int mid = (low + high) / 2;
        if(array[mid] == target) {
            cout << "Number found at index " << mid << endl;
            found = true;
            break;
        }
        else if(array[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(!found) {
        cout << "Number not found!" << endl;
    }

    return 0;
}

/*
Sample Output:
Enter a number to search: 77
Number found at index 5

Enter a number to search: 55
Number not found!
*/
