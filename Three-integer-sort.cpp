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
    
    float x1, y1, z1;
    
    float max;
    float min;
    
    float absmin;
    float absmax;
    
    cout << "Enter three different integers separeted by spaces:";
    cin >>x>>y>>z;
    cout << " \n\n";
    
    
 	max =  x;
    min =  x;
    absmin = x ;
    absmax = x ;
    
    if( x >= max)  //set for max
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
    
    abs(x) = x1;
    abs(y) = y1;
    abs(z) = z1;
    
    
	if (x1 <= absmin )  //set for absmin
    	(absmin = x1);
    
    if (y1 <= absmin )
    	(absmin = y1);
    
    if (z1) <= absmin )
    	(absmin = z1) );
    	

    if (x1 >= absmax )  //set for absmax
    	absmax = x1);
    
    if (y1 >= absmax )
    	absmax = y1;
    
    if (z1 >= absmax )
    	absmax = z1;
    	
    cout << abs (x) << endl;
    cout << abs (y) << endl;
    cout << abs (z) << endl;
    
    	
    
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




*/
