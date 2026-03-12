#include <iostream>
using namespace std ;

    int main ( ) {
    int n ;
    cout << " - - - Day 15 : Number Pattern - - - " << endl ;
    cout << " Kitni line chahiye....? : " ;
    
    cin >> n ;
    
    for ( int i = 1; i <= n ; i++ ) {
    for ( int j = 1; j <= n ; j++ ) {
     
     // Hum 'j' print krenge kyuki j humesha 1 se shuru hota hei 
     cout << j << " " ;
    }
     cout << endl ;
    }
    
    return 0 ;
    
    }
     
    