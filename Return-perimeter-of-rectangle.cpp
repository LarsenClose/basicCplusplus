//CSC 160 In Class Excersice 2/26/16
//Purpose:  Reproduce program and write a function to return the perimeter 
//          of a rectangle
//Author: Larsen J Close                Most recent changes: 2/26/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators

using namespace std;  // using directive

double recPerim ( double length, double width)
{
       return( length*2 + width*2);
}//end recPerim



int main ( void )
{
    double l,   //length
           w,   //width
           p;   //result
    
    l = 35;
    w = 28;
    p = recPerim( l, w );
    
    cout << "For a rectangle " << l << " feet long and " << w << " feet wide\n";
    cout << "the perimeter is " << p << " feet.\n\n";
    
    cout << "For a rectangle " << 47.3 << " feet long and " << 31.6 << " feet wide\n";
    cout << "the perimeter is " << recPerim(47.3, 31.6) << " feet.\n";
    
    system ("pause");
    return 0;
    
} //end main ( )

/* Output of above program

For a rectangle 35 feet long and 28 feet wide
the perimeter is 126 feet.

For a rectangle 47.3 feet long and 31.6 feet wide
the perimeter is 157.8 feet.
Press any key to continue . . .

*/
    
    
