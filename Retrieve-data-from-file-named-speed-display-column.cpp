//CSC 160 	Homework 2 due 3/25/16
//Purpose:  Retrieve data from speed.dat and convert it in side by
//          side columns
//Author: Larsen J Close                Most recent changes: 3/11/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <fstream> // needed for ofstream

using namespace std;  // using directive

int main ( void )
{
    
    double speed;
    double kSpeed;
    
    ifstream in_stream;
    in_stream.open("speed.dat");
    if(in_stream.fail())
    {
         cout << "Failed to open file 'speed.dat'\n";
         exit(1);
    }
    
    cout << "   Speed           Speed\n";
    cout << "   (mph)           (kph)\n";
    in_stream >> speed;
    
    while( !in_stream.eof())
    {
           kSpeed = speed * 1.609;
           
     
           cout << setw(7) << fixed << setprecision(1)<< speed << setw(18);
           cout  << fixed << setprecision(2) << kSpeed << endl;
           in_stream >> speed;
    }
    
    
    system ("pause");
    in_stream.close();
    return 0;
    
} //end main ( )
         

/*
   Speed           Speed
   (mph)           (kph)
   10.0             16.09
   20.0             32.18
   30.0             48.27
   40.0             64.36
   50.0             80.45
   60.0             96.54
   70.0            112.63
   80.0            128.72
   90.0            144.81
  100.0            160.90
Press any key to continue . . .
*/

