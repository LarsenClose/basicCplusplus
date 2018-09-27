//CSC 160 	Homework 1 due 3/25/16
//Purpose:  Generate speeds and write hem to a file
//Author: Larsen J Close                Most recent changes: 3/11/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <fstream> // needed for ofstream

using namespace std;  // using directive

int main ( void )
{
    
    int speed;
    
    ofstream out_stream;
    out_stream.open("speed.dat");
    if(out_stream.fail())
    {
         cout << "Failed to open file 'speed.dat'\n";
         exit(1);
    }
    
    cout << "Writing the following speeds to a file named 'speed.dat'...\n";
    cout << "  Speed\n";
    cout << "  (mph)" << endl;
    
    for(speed = 10; speed <= 100; speed = speed + 10)
    {
         cout << setw(5)<< speed << endl;
         out_stream << setw(5) << speed << endl;
    }
    
    
    
    system ("pause");
    out_stream.close();
    return 0;
    
} //end main ( )

/* Output for this program:
Writing the following speeds to a file named 'speed.dat'...
  Speed
  (mph)
   10
   20
   30
   40
   50
   60
   70
   80
   90
  100
Press any key to continue . . .
*/

         

    

