#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "--- Day 13: Table Generator ---" << endl;
    cout << "Kaunsa number ki table chahiye? : ";
    cin >> num;

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
