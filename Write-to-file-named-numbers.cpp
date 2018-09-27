//CSC 160 	In class assignment
//Purpose:  Write to a file
//Author: Larsen J Close                Most recent changes: 3/11/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <fstream> // needed for ofstream

using namespace std;  // using directive

int main ( void )
{
    
    int numbers;
    
    ofstream out_stream;
    out_stream.open("numbers.dat");
    if(out_stream.fail())
    {
         cout << "Failed to open file 'numbers.dat'\n";
         exit(1);
    }
    
    cout << "Writing the following numbers to a file named 'numbers.dat'...\n";
    
    for(numbers = 3; numbers <= 28; numbers = numbers + 5)
    {
         cout << setw(5)<< numbers << endl;
         out_stream << setw(5) << numbers << endl;
    }
    
    
    
    system ("pause");
    out_stream.close();
    return 0;
    
} //end main ( )
         

    

