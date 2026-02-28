#include <iostream>
using namespace std;

int main ( ) {
	// 1. Array Declare karna ( 5 sstudents ke liye )
	float marks [5] ;
	float sum = 0 , average;
	
	cout << " - - - Day 5 : Batch P3rformance Tracker - - - " << endl ;
	
	// 2. Loop ka use karke Arrat mein data bharna 
	for ( int i = 0 ; i < 5 ; i ++ ) {
		cout << "Enter marks for Students " << i + 1 << " : " ;
		cin >> marks [ i ] ;
		sum = sum + marks[ i ] ;
  // Saare marks ko jodhna 
	}
	
	// 3. Average nikalna 
	average = sum/5 ;
	
	cout << " \n - - - Analysis Result - - - " << average << endl ;
	
	// 4. Array se data wapas dikhana
	
	if ( average >= 75.0 )  {
		cout << " Verdict :Excellent Batch Performance ! " << endl ;
	} else {
		cout << "Verdict : Need more coding practice . " << endl ;
	}
	
	// 5. - - - Naya loguc : Sabse jyada marks dhundne ke liye - - - 
	float maxMarks = marks[ 0 ];
	// Maan lo pehla student topper hei 
	int topperIndex = 1 ;
	
	for(int i = 1 ; i < 5 ; i ++ ) {
		if (marks[ i ] > maxMarks ) {
			maxMarks = marks[ i ] ;
	// Naya topper mil gaya ! 
	     topperIndex = i + 1 ;
		}
	}
	
	  cout << "Best Performance : Student " << topperIndex << " with " << maxMarks << " marks ! " << endl ;
	  
	return 0 ;

}
 
  