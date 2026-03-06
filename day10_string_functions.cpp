#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    
    cout << "--- Day 10: String Functions Master ---" << endl;
    cout << "Enter a username: ";
    cin >> username;

    // 1. Length check karna
    cout << "Username ki length hai: " << username.length() << endl;

    // 2. Specific character check karna (index starts from 0)
    cout << "Pehla letter hai: " << username.at(0) << endl;

    // 3. Modifying the string
    username.push_back('!');
    // Last mein '!' add karega
    
    cout << "Aapka Secured Username: " << username << endl;
    cout << "Status: Success! 10% of the journey completed. 🔥" << endl;

    return 0;
}
