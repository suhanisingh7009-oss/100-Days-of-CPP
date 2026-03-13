#include <iostream>
using namespace std ;

      int main ( ) {
          int rows ;
          cout << " - - - Day 16 : Inverted Triangle - - - " << endl ;
          cout << " Konsi line se shuru karen....? : " ;
          cin >> rows ;
          
      // Outer loop : Row ke liye ( reverse counting )
          for ( int i = rows ; i >= 1; i-- ) {
          	
     // Inner loop : Har row mei kitne star honge 
         for ( int j = 1 ; j <= i ; j++ ) {
         	
         cout << " * " ;
         }
         
     // Line change 
        cout << endl ;
          }
          
    return 0 ;
    
      }