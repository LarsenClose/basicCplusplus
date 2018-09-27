//CSC 160 	In class assignment 2
//Purpose:  Read a file and display
//Author: Larsen J Close                Most recent changes: 3/11/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <fstream> // needed for ofstream

using namespace std;  // using directive

int main ( void )
{
    
    double numbers;
    double sNumbers;
    
    ifstream in_stream;
    in_stream.open("numbers.dat");
    if(in_stream.fail())
    {
         cout << "Failed to open file 'numbers.dat'\n";
         exit(1);
    }
    
    cout << "Numbers      Square of numbers\n";
    in_stream >> numbers;
    
    while( !in_stream.eof())
    {
           sNumbers = numbers * numbers;
           
           cout << setw(5) << numbers << setw(18) << sNumbers << endl;
           in_stream >> numbers;
    }
    
    
    system ("pause");
    in_stream.close();
    return 0;
    
} //end main ( )
         

/*

Numbers      Square of numbers
    3                 9
    8                64
   13               169
   18               324
   23               529
   28               784
Press any key to continue . . .

*/

