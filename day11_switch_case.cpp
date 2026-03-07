#include <iostream>
using namespace std;

    int main()  {
    int choice;
    int a = 10, b = 5;
    // Sample numbers

    cout << "--- Day 11: Switch Case Menu ---" << endl;
    cout << "1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)" << endl;
    cout << "Apna option chunein (1-3): ";
    cin >> choice;

    switch(choice)  {
    case 1:
    cout << "Result: " << 10 + 5 << endl;
     break; 
    // Break lagana zaroori hai warna saare case chal jayenge!
     case 2:
     cout << "Result: " << 10 - 5 << endl;
     break;
     case 3:
     cout << "Result: " << 10 * 5 << endl;
     break;
     default:
     cout << "Invalid Option! Please 1 , 2 ya 3 hi dabayein." << endl;
    }

    return 0;
}
