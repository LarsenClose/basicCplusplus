//CSC 160 PROJECT #1
//Purpose: C grade level program which accepts from keyboard entry miles, furlongs,
//			yards, feet, and inches between two points and then displays the result
//			in feet with two numbers to the right of the decimal.
//Author: Larsen J Close                Most recent changes: 2/18/2016 1:40am

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <cmath>  // needed for sqrt()

using namespace std;  // using directive

int main ( void )
{

    double m;  //miles
    double f;  //furlongs
    double y;  //yards
    double ft; //feet
    double i;  //inches
    
    double t; //total feet

    
    cout << "This program accepts a distance in miles, furlongs, yards, feet";
    cout << " and inches" << endl;
    cout << "then converts those combined entries to a total number of";
    cout << " feet." << endl;
    
    cout << "Enter the number of miles:  ";
    cin >> m;
    
    cout << "Enter the number of furlongs:  ";
    cin >> f; 
    
    cout << "Enter the number of yards:   ";
    cin >> y;
 
    cout << "Enter the number of feet:   ";
    cin >> ft;
    
    cout << "Enter the number of inches:   ";
    cin >> i;

    t = ((m * 5280) + (f * 660.001) + (y * 3) + (ft) + ( i * 0.083333 ));


	
	//5280 feet in a mile, 660.001 feet in a furlong, 3 feet in a yard\
    // and 1/12 feet in an inch
	
	cout << fixed << setprecision (2);
    
    cout << "That distance is equivalent to " << t << " feet" << endl;
    
    system ("pause");
    return 0;
    
} //end main ( )

/* Display for above program

This program accepts a distance in miles, furlongs, yards, feet and inches
then converts those combined entries to a total number of feet.
Enter the number of miles:  3
Enter the number of furlongs:  2
Enter the number of yards:   172
Enter the number of feet:   2
Enter the number of inches:   9
That distance is equivalent to 17678.75 feet
Press any key to continue . . .

This program accepts a distance in miles, furlongs, yards, feet and inches
then converts those combined entries to a total number of feet.
Enter the number of miles:  8
Enter the number of furlongs:  6
Enter the number of yards:   107
Enter the number of feet:   0
Enter the number of inches:   4
That distance is equivalent to 46521.34 feet
Press any key to continue . . .

This program accepts a distance in miles, furlongs, yards, feet and inches
then converts those combined entries to a total number of feet.
Enter the number of miles:  5
Enter the number of furlongs:  0
Enter the number of yards:   201
Enter the number of feet:   1
Enter the number of inches:   11
That distance is equivalent to 27004.92 feet
Press any key to continue . . .

*/
