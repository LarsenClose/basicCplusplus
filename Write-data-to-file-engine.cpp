//CSC 160 	Project 2 Grade C
//Purpose:  Write data to a file
//Author: Larsen J Close                Most recent changes: 4/27/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <fstream> // needed for ofstream

using namespace std;  // using directive

int main ( void )
{
    
    double data, speed, torque;
    
    ofstream out_stream;
    out_stream.open("engine_01.dat");
    if(out_stream.fail())
    {
         cout << "Failed to open file 'engine_01.dat'\n";
         exit(1);
    }
    
    cout << "Please enter the data to be written to  file 'engine_01.dat'...\n";
    cout << " Engine Speed                    Torque\n";
    cout << "  (rpm)                          (lb ft)" << endl;
    
    for (int x = 0; x <9 ; x++)
	{
    cin >> speed;
    out_stream << setw(20) << left << speed; 
    cin >> torque;
    out_stream << setw(20) << right << torque << endl;
     }
    
    out_stream.close();
    
    system ("pause");
    return 0;
    
} //end main ( )

/* Output for this program:
Please enter the data to be written to  file 'engine_01.dat'...
 Engine Speed                    Torque
  (rpm)                          (lb ft)
1000 294.3
1500 355.8
2000 381.2
2500 388.3
3000 381.5
3500 367.4
4000 342.4
4500 309.0
5000 260.2
Press any key to continue . . .
*/
