#include <iostream>
using namespace std;

  int main ( ) {
  	int n;
  	cout << "Kitne students ke marks hein? : " ;
  	cin >>n;
  	int marks[n] ;
  	
  	// Input marks
  	for ( int i=0; i<n; i++) {
  		cout << " Enter marks for students " << i+1<<": " ;
  		cin >> marks[i] ;
  	}
  	
  	// Logic to find maximum
  	int max = marks[0] ;
  	
  	// Pehle wale ko Topper maan loo
  	for ( int i = 1 ; i<n ; i++) {
  		if ( marks [i] > max ) {
  		  
      // Agar koi aur bada mila 
       max = marks[i] ;
       
       // Toh use naya Topper bana do 
       
  		}
  	}
  	
  	cout << "\n Sabse jyada(maximum) marks hein : "<< max << endl ;
  	
  	return 0 ;
  }