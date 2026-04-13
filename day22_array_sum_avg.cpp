#include <iostream>
  using namespace std ;
  
       int main ( ) {
       	int n=5 ;
       	int marks [ n ] ;
       	int sum = 0 ;
       	float average ;
       	
       	cout<<" - - - Day 22 : Result Generator - - - " <<endl;
       	
       	for ( int i =0 ; i < n ; i++ ) {
       		cout << "Subjects" << i + 1 << " marks : " ;
       		cin >> marks[i] ;
       		sum = sum + marks[i] ;
       	}	
       		average = ( float )sum /n;
       		
       		cout << "\n- - - Result final- - - " <<endl ;
       		cout << " Total marks: " << sum << " / 500 " <<endl ;
       		cout << " Percentage " <<average << " % " << endl ;
       		
       		if ( average >= 33) {
       		cout << " Status : PASS " << endl;
       		}
       		else {
       		cout << " Status : FAIL" << endl ;
       		}
       		
       		return 0 ;
       		
       	}