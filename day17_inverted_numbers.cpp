#include <iostream>
using namespace std ;
   
      int main ( )  {
      	int n ;
      	cout << " - - - Day 17 : Inverted Number Pattern - - - " << endl ;
      	cout << " Enter number of  rows..! : " ;
      	
      	cin >> n ;
      	
      	// Outer loop : Start from " n " and down goes to 1 
      	for ( int i = n ; i >= 1 ; i-- ) {
      		
         // Inner loop : Print from 1 up to the current value of " i "  
         for ( int j = n ; j <= 1 ; j++) {
       
         cout << j << " " ;
       }
         	
         cout << endl ;
      }
         
         return 0 ;
         
  }
         
     