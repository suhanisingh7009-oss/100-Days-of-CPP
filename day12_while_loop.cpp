   #include <iostream>
   using namespace std;

        int main ( )  {
        int n;
       cout << "--- Day 12: Countdown Timer ---" << endl;
       cout << "Kahan se ginti shuru karni hai? : ";
       cin >> n;

       while (n >= 1)  {
       // Jab tak n ki value 1 ya usse badi hai
       cout << n << " " << endl;
        n--;
       // n ki value ko 1 se kam karte raho
    }
 
       cout << "Boom! 🚀 Mission Accomplished." << endl;

    return 0;
}
