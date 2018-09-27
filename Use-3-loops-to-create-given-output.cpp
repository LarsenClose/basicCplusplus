//CSC 160 Homework 1 due Feb 26
//Purpose:  Write a single complete C++ program which, upon execution,
//          will use the three C++ loop contructs to produce output
//          exactly as shown.
//Author: Larsen J Close                Most recent changes: 2/19/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <cmath>  // needed for sqrt()

using namespace std;  // using directive

int main ( void )
{
    int x;
    int m;
    int n;
    int s;
    int k;
    
    m = 5;
    n = 2;
    k = 1;
    
    
  
   cout << "Using a single for loop to count by threes";
   
   for ( x = 3; x <= 15 ; x = x + 3 ) {
       
       cout << setw(3) << x;
       
                                 }
   
   cout << "\n\n" << "Using a single while loop to show M%N" << endl;
   cout << "M       N      M%N" << endl;
   
   
   while( m >= 2 ){
          
        s = m % n;
          
        cout << m << setw(8) << n << setw(8) << s << endl;
          
          m = m - 1;
          n = n + 2;
            
                  }

	cout << "\n\n";
   
   
   cout << "Using a single do-while loop to skip a number" << endl;
   
   do{
        if ( k != 4)
           cout << k << setw(3);
        
        k++;
        
        }while(k <= 6);

	cout << "\n\n";
   
    system ("pause");
    return 0;
    
    
} //end main ( )
   
   
/* Display for above program
Using a single for loop to count by threes  3  6  9 12 15

Using a single while loop to show M%N
M       N      M%N
5       2       1
4       4       0
3       6       3
2       8       2


Using a single do-while loop to skip a number
1  2  3  5  6

Press any key to continue . . .
*/
