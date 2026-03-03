#include <iostream>
using namespace std;

    int main() {
    int marks[3][2];
   // 3 Students, 2 Subjects

    // Input lena
    cout << "--- Enter Marks for 3 Students ---" << endl;
    for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 2; j++) {
    cout << "Student " << i+1 << ", Subject " << j+1 << ": ";
            cin >> marks[i][j];
        }
    }

    // Output dikhana (Matrix Format)
     cout << "\n--- Result Matrix ---" << endl;
     for(int i = 0; i < 3; i++) {
     for(int j = 0; j < 2; j++) {
     cout << marks[i][j] << "  ";
        }
    cout << endl;
     // Har row ke baad nayi line
    }

    return 0;
}
