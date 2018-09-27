//CSC 160 PROJECT #1
//Purpose:  A grade level edition to display a user designated number of terms
//			of the Fibonacci series
//Author: Larsen J Close                Most recent changes: 2/18/2016 9:11PM

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <cmath>  // needed for sqrt()

using namespace std;  // using directive

int main ( void )
{
    int n;  //user input number
    int x;  //loop iteration
    int first;  //Fibonacci solution
    int second;
    int next;
    
    first = 1;
    second = 0;
    next = 0;
  
    
    cout << "This program will calculate and display a user-designated" << endl;
    cout << "number of terms for the Fibonacci sequence." << endl;
    
    cout << "How many terms? ";
    cin >> n;
    
    cout << "Term number			Fibonacci Number" << endl;
    
       for ( x = 1; x < n ; x++) {

    	cout << setw (7) << x << setw(38) << next << endl;
    	
    	next = first + second;
    	first = second;
    	second = next;
    	
	}
	
	cout << setw (7) << x << setw(38) << next << endl;
        
    system ("pause");
    return 0;
    
} //end main ( )

/* Display for above program

This program will calculate and display a user-designated
number of terms for the Fibonacci sequence.
How many terms? 15
Term number                     Fibonacci Number
      1                                     0
      2                                     1
      3                                     1
      4                                     2
      5                                     3
      6                                     5
      7                                     8
      8                                    13
      9                                    21
     10                                    34
     11                                    55
     12                                    89
     13                                   144
     14                                   233
     15                                   377
Press any key to continue . . .

*/
