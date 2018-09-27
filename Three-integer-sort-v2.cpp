//Homework 2 for lesson 4
//Purpose: A program that accepts three integers from the keyboard
//         and display the largest and smallest values and display
//         the largest and smallest absolute values
//Author: Larsen J Close                Most recent changes: 2/12/2016

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <cmath>  // needed for sqrt()

using namespace std;  // using directive

int main ( void )
{

    float x;  
    float y;  
    float z;  
    
    float X, Y, Z;
    
    float max;
    float min;
    
    float absmin;
    float absmax;
    
    cout << "Enter three different integers separeted by spaces:";
    cin >> x >> y >> z ;
    cout << " \n\n";

    X = abs (x);
    Y = abs (y);
    Z = abs (z);
    
    
 	max =  -99999;
    min =  99999;
    absmin = 99999 ;
    absmax = -99999 ;
    
    
    if ( x >= max)  //set for max
    	max = x;
    
    if ( y >= max)
		max = y;
		
	if ( z >= max)
		max = z;
		
		
    
    if ( x <= min)  //set for min
    	min = x;
    
    if ( y <= min)
    	min = y;
    
    if ( z <= min)
    	min = z;
    
    
	if (X <= absmin )  //set for absmin
    	absmin = X;
    
    if (Y <= absmin )
    	absmin = Y;
    
    if (Z <= absmin )
    	absmin = Z;
    	

    if (X >= absmax )  //set for absmax
    	absmax = X;
    
    if (Y >= absmax )
    	absmax = Y;
    
    if (Z >= absmax )
    	absmax = Z;
    	
    	
    cout << "Smallest value is " << min << endl;
    cout << "Largest value is " << max << endl;
    cout << "Smallest absolute value is " << absmin << endl;
    cout << "Largest absolute value is " << absmax << endl;

    system ("pause");
    return 0;
    
} //end main ( )

/* Display for above program

Enter three different integers separeted by spaces:1 2 -3


Smallest value is -3
Largest value is 2
Smallest absolute value is 1
Largest absolute value is 3
Press any key to continue . . .

Enter three different integers separeted by spaces:-12 -23 -45


Smallest value is -45
Largest value is -12
Smallest absolute value is 12
Largest absolute value is 45
Press any key to continue . . .


Enter three different integers separeted by spaces:-33 0 32


Smallest value is -33
Largest value is 32
Smallest absolute value is 0
Largest absolute value is 33
Press any key to continue . . .

*/
