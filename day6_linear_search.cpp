#include <iostream>
using namespace std;

int main() {
    int rollNumbers[5] = {101, 105, 110, 115, 120}; // Sample Data
    int target, foundAt = -1;

    cout << "--- Day 6: Student Record Finder ---" << endl;
    cout << "Enter Roll Number to search: ";
    cin >> target;

    // Linear Search Logic
    for(int i = 0; i < 5; i++) {
        if(rollNumbers[i] == target) {
            foundAt = i; // Index save kar liya
            break;       // Mil gaya toh loop rok do
        }
    }

    if(foundAt != -1) {
        cout << "Success! Roll Number " << target << " found at seat index: " << foundAt << endl;
    } else {
        cout << "Error: Roll Number not found in our database." << endl;
    }

    return 0;
}
