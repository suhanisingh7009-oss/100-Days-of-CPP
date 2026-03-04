 #include <iostream>
 #include <string>
 // Zaroori hai strings ke liye
 using namespace std;

    int main() {
    string fullName;
    string goal;

    cout << "--- Welcome to Day 9: String Power ---" << endl;

    // Poora naam lene ke liye getline use karte hain (kyunki cin space ke baad ruk jata hai)
    cout << "Enter your Full Name: ";
    getline(cin, fullName); 

    cout << "What is your main goal in 100 Days? ";
    getline(cin, goal);

    // Output - Strings ko jodna (Concatenation)
    cout << "\n--- Your Coding Profile ---" << endl;
    cout << "Hello, " << fullName << "!" << endl;
    cout << "Your Goal: " << goal << endl;
    cout << "Status: On track to becoming a Pro Coder! 🚀" << endl;

    return 0;
}
