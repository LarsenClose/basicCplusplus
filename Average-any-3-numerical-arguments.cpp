//CSC 160 In Class Excersice 2/26/16
//Purpose:  Write a function that returns the average of any three numerical
//          arguments and test the function with calls of each function
//Author: Larsen J Close                Most recent changes: 2/26/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators

using namespace std;  // using directive

double aveFunc ( double x, double y, double z)
{
       return( ( x + y + z ) / 3 );
}//end aveFunc



int main ( void )
{
    double average;
    double x;   //value 1
    double y;   //value 2
    double z;   //value 3
    
    cout << "Please enter three numerical values seperated by spaces: ";
    cin >> x >> y >> z;
    
    cout << endl;
    
    average = aveFunc(x, y, z); // average 
    
    cout << "The average of " << x << ", " << y << ", and " << z << " is ";
    cout << average << endl;
    
    cout << "The average of 333, 444, and 555 is " << aveFunc(333, 444, 555);
    cout << endl;
    
    cout << "The average of 1.2, 3.4 and 5.6 is " << aveFunc(1.2, 3.4, 5.6);
    cout << endl;
    
    
    
    system ("pause");
    return 0;
    
} //end main ( )

/* Output of above program

Please enter three numerical values seperated by spaces: 3000 3442 2234

The average of 3000, 3442, and 2234 is 2892
The average of 333, 444, and 555 is 444
The average of 1.2, 3.4 and 5.6 is 3.4
Press any key to continue . . .


*/
    
