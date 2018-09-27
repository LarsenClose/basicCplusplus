/* quiz_01
   Purpose:   calculate and display the volume of a box
   Author: Larsen Close             Most recent change: 2/19/2016
*/

#include <iostream>  
#include <iomanip> 
using namespace std;

int main ( void )
{
    //l, w, and h measured in feet

    double l = 5.43,  //lenght
           w = 4.567, //width
           h = 7.8,   //height
    volume = l*w*h;   //volume (cubic feet)

    cout << "123456789012345678901234567890\n";
    cout << fixed << setprecision(2);
    cout << "lenght = " << setw(7) << l << "  feet" << endl;
    cout << "width  = " << setw(7) << w << "  feet" << endl;
    cout << "height = " << setw(7) << h << "  feet" << endl;
    cout << fixed << setprecision(3);
    cout << "volume = " << setw(8) << volume << " cubic feet" << endl;
    
    system ("pause");
    return 0;
} 

/* Program output

123456789012345678901234567890
lenght =    5.43  feet
width  =    4.57  feet
height =    7.80  feet
volume =  193.431 cubic feet
Press any key to continue . . .

*/
