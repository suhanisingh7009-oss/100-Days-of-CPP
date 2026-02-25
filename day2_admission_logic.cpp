#include <iostream>
using namespace std;

int main( )  {
	       float percentage;
	       
	       cout << " --- GL Bajaj Admission Predictor --- " << endl ;
	       cout << " Enter your 12th      Percentage : " ;
	       cin >> percentage ;
	       
	       // Logic Starts Here
	           if (percentage >= 85.0) {
	       cout << "Status: Eligible for AI-ML Branch! " << endl ;
	       cout <<"Tip : Start building your GitHub profile now ."
<< endl ;
	           }
     else if (percentage >= 75.0) {
           cout << "Status : Eligible for CSE/IT Branch. " << endl ;
           cout << "Tip : Focus on coding to upgrade later ." << endl ;
     }
     else  {
           cout << "Status : Admission is difficult in top branches." << endl ;
           cout << "Tip: Try to improve your score in entrance exams. " << endl ;
     }
     
     return 0 ;
    
 }
	          