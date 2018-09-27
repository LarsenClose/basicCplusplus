//Homework due 2/12/2016
//Purpose: Write an interactive program to convert Fahrenheit to Celsius
//Author: Larsen J Close                Most recent changes: 2/12/2016

          //F= (C * 1.8)+32
          //C= ((F-32)/1.8)
          //fahrenheit = (celsius * 9.0) / 5.0 + 32
          //Celsius = (((Fahrenheit - 32 ) * 5 )/9)
          //fahrenheit = 9.0 / 5.0 * celsius + 32;
    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <cmath>  // needed for sqrt()

using namespace std;  // using directive

int main ( )
{

    float Fahrenheit;
    float Celsius;
    
    
    
    
    cout << "This program converts a Fahrenheit temperature" << endl;
    cout << "to its Celsius equivalent." << endl;
    cout << "Enter a Fahrenheit temperature:";
    cin >> Fahrenheit;
    
    Celsius = ((Fahrenheit - 32)/ 1.8)
   
    
    cout << "\n\n";
    
    cout << Fahrenheit << "degrees Fahrenheit is the same as" << 
         Celsius << "degrees Celsius" << endl;
         
    system ("pause");
    return 0;
    
} //end main ( )
    
