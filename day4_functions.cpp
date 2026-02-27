#include <iostream>
using namespace std;

// 1.Function Defination (Mini - Machine)
void checkEligibility( float per ) {
	if ( per >= 85.0 )  {
		cout << "Result : Eligible for AI-ML Branch! " << endl ;
	}
	else if ( per >= 75.0 ) {
		cout << "Result : Eligible for CSE Branch ." << endl ;
	}
	else {
		cout << "Result : Better luck next time. " << endl ;
	}
}

int main() {
	float percentage ;
	char choice ;
	
	cout << " --- Day 4: Function-Based Portal --- " << endl ;
	
	  do {
	  	cout << "\nEnter student percentage : " ;
	  	cin >> percentage ;
	  	
	  checkEligibility(percentage) ;
	  
	      cout << "\nCheck another? (y/H): " ;
	         cin >> choice;
	         
	  } while (choice  == 'y' || choice == 'Y');
	  
	     cout << "Cleanup successful. Goodbye ! " << endl ;
	     return 0;
}