//Homework for lesson 4
//Purpose: A program that calculates the total value of a number of coins
//Author: Larsen J Close                Most recent changes: 2/12/2016

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <cmath>  // needed for sqrt()

using namespace std;  // using directive

int main ( void )
{

    double h;  //h for half dollars
    double q;  //q for quarters
    double d;  //d for dimes
    double n;  //n for nickles
    double p;  //p for pennies
    double t;  //total value
    
    
    
    cout << "This program calculates the total";
    cout << "value of a number of coins." << endl;
    
    cout << "Enter the number of half dollars: ";
    cin >> h ;
    
    cout << "Enter the number of quarters    : ";
    cin >> q ;
    
    cout << "Enter the number of dimes       : ";
    cin >> d ;
    
    cout << "Enter the number of nickles     : ";
    cin >> n ;
    
    cout << "Enter the number of pennies     : ";
    cin >> p ;
    
    t = (h*0.5) + (q*0.25) + (d*0.1) + (n*0.05) + (p*0.01);
    
    cout << fixed << setprecision(2);
    
    cout << "Total value =                 $" << t << endl;
    

    system ("pause");
    return 0;
    
} //end main ( )

/* Display for above program
This program calculates the totalvalue of a number of coins.
Enter the number of half dollars: 1
Enter the number of quarters    : 4
Enter the number of dimes       : 5
Enter the number of nickles     : 2
Enter the number of pennies     : 3
Total value =                 $2.13
Press any key to continue . . .

*/
