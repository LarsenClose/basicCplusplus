//CSC 160 PROJECT #1
//Purpose:  B grade level program which accepts from keyboard of a whole number 
//			of inches and display the associated number of yards, feet and inches
//			with each output correctly displaying singular or plural units
//Author: Larsen J Close                Most recent changes: 2/18/2016 12:31 PM

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <cmath>  // needed for sqrt()

using namespace std;  // using directive

int main ( void )
{

    int I;  //input inches
    
    int y;  //yards
    int f;  //feet
    int i;  //output inches

    
    cout << "This program converts a whole number of inches to yards, feet, inches." << endl;
    
    cout << "Enter a whole number of inches:  ";
    cin >> I;
    
   
    
    y = I/36;
    
    f = (I - (36*y))/12;
    
    i = (I - (36*y) - (12*f));
    
    //f = ((I%36)/12); one thought on how to do it
    
    


    cout << I << " inches = " << y;
    
    if(y == 1)
		cout << " yard, ";
		else cout << " yards, ";
	
	cout << f;
	
	if(f == 1)
		cout << " foot, ";
		else cout << " feet, ";
	
	cout << " and " << i; 
	
	if(i == 1)
		cout << " inch" << endl;
		else cout << " inches" << endl;
		
	
			// Don't need this because int cout << fixed << setprecision (0);
	

	
    
    system ("pause");
    return 0;
    
} //end main ( )

/* Display for above program

This program converts a whole number of inches to yards, feet, inches.
Enter a whole number of inches:  213
213 inches = 5 yards, 2 feet,  and 9 inches
Press any key to continue . . .

This program converts a whole number of inches to yards, feet, inches.
Enter a whole number of inches:  125
125 inches = 3 yards, 1 foot,  and 5 inches
Press any key to continue . . .

This program converts a whole number of inches to yards, feet, inches.
Enter a whole number of inches:  37
37 inches = 1 yard, 0 feet,  and 1 inch
Press any key to continue . . .

*/
