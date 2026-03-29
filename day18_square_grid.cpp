#include <iostream>
using namespace std ; 

    int main( ) {
    	int size ;
    	cout << "- - - Day 18 : Square Gride - - -" <<endl;
    	cout << " Square ka size kitna rakhna hei....? : " ;
    	cin>>size;
    	
    // Outer loop for rows
    for ( int i = 1 ; i <= size ; i++ ) {
    	
   // Inner loop for columns
    for ( int j = 1 ; j <= size ; j++ ) {
    	cout << j << " " ;
       }
     cout << endl ;
    }
     return 0 ;
    }