#include <iostream>
using namespace std;

           int main() {
          // Array declaration: [5] matlab 5 jagah book ho gayi
           int marks[5]; 

          cout << "--- Day 21: My First Array ---" << endl;

        // Input: Taking 5 values from user
          for (int i = 0; i < 5; i++) {
          cout << "Enter marks for subject " << i+1 << ": ";
          cin >> marks[i];
    }

          cout << "\nShowing your stored marks:" << endl;
    
         // Output: Printing the array
          for (int i = 0; i < 5; i++) {
          cout << "Subject " << i+1 << " = " << marks[i] << endl;
    }

    return 0;
}
