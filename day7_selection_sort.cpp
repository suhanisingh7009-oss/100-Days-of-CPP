#include <iostream>
using namespace std ;

int main ( ) {
	int marks [ 5 ] = { 85 , 45 , 95 , 65 , 75 } ;
	int n = 5 ;
	
	cout << " - - - Day 7 : Automatic Ranker (Shorting) - - - " << endl ;
	cout << " Original Marks : 85 , 45 , 95 , 65 , 75 " << endl ;
	
	// Selection Sort Logic
	 for ( int i = 0 ; i < n - 1 ; i ++ )
{
	 for ( int j = i+ 1 ; j < n ; j++ ) 
{
	 if ( marks[ j ] < marks [ i ] )
{
	  // Swapping ( Adla - badli )
	  int temp = marks[ i ] ;
	  marks[ i ] = marks[ j ] ;
	  marks[ j ] = temp ;
}
}
}
     cout << "\nSorted Marks (Low to High):" ;
     for ( int i = 0 ; i < n ; i++ ) {
     cout << marks[ i ]  << " " ;
     }
     
     cout << "\n\nGreat ! Data is now organized. " << endl ;
     return 0 ;
   }	         	      