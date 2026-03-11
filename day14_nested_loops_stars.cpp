  #include <iostream>
  using namespace std ;
 
  int main  ( ) { 
      int rows ;
   
      cout << "- - -  Day 14: Star Pattern Generator - - - " << endl ;
   
      cout << " Kitni lines ka triangle chahiye ? : " ;
  
       cin >> rows ;
  
  // Outer loop for rows
   
       for ( int i = 1 ; i <= rows ; i++ )  {
  	
 // Inner loop for stars in each rows
 
       for ( int j = 1 ; j <= i ; j++ )  {
  	
       cout << "* " ;
   }
  
 // New line after each row is done !
 
   cout << endl ;
       }
 
  return  0 ;
  }
  
   
   
