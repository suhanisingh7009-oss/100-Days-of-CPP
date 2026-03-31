#include <iostream>
using namespace std;

    int main ( ) {
    	int n=8;
    	
    // Size of the piramid
    cout << " - - - Day 20 : Milestone Diamond - - - " << endl ;
    
    // Part 1 : Upper triangle
    for(int i = 1 ; i <= n ; i++) {
    	
    // Space for alignment
    for(int sp = 1 ; sp <= n - i ; sp++) {
    	
    	cout  <<  "  " ;
    }
    
    //Number increasing 
    for(int j = 1 ; j <= i ; j++) {
    	
    cout  <<  j  <<  " " ;
    }
    
    // Number decreasing
    for(int j = i - 1 ; j >= 1; j--) {
    	
    	cout << j << "  " ;
    }
    
    cout << endl ;
    }
    
    return 0 ;
    
 }