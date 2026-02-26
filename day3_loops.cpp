#include <iostream>
using namespace std ;

int main( )  {
	float percentage ;
	int choice = 1 ; 
	
	cout << " --- Professional Admission Portal --- "  << endl ;
	
	while ( choice == 1 )  {
		cout << "\nEnter student percentage :  " ;
		cin >> percentage ;
		
		if ( percentage >= 85.0 )  {
			cout << "Result : Eligible for AI-ML Branch ! " << endl;
		 	}
		 	else if ( percentage  >= 75.0 ) {
		 		cout << "Result : Eligible for CSE Branch . " << endl ;
		 	}
		 	else {
		 		cout << "Result : Not eligible for top branches. "  << endl ;
		 	}
		 	
		 	cout << "\nCheck for another student ?  (Type 1 for yes, 0 for No) : " ;
		 	cin >> choice ;
	}
	
	cout << " Thank you for using the portal. Data saved ! " << endl ;
	return 0 ;
}