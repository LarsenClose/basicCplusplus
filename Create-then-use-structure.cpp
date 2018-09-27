//CSC 160 	Homework 1 Due 4/29/16
//Purpose:  Write program using structure of fruit
//Author: Larsen J Close                Most recent changes: 4/29/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
using namespace std;  // using directive

struct fruit
{
 char type[20];
 double p;      
};


int main ( void )
{
    fruit c1, c2, c3;
    

    cout << "To create a fruit inventory: \n";
    
    for( int i =0; i<3; i++)
    {
         
    
    
    cout << "Enter fruit type: ";
    cin >> c1.type;
    cout >> "\nEnter fruit price per pound: ";
    cin >> c2.p; 
    }
    
    cout << "Fruit inventory data is as follows: \n";
    cout << "Fruit                Price\n";
    
    
    for( int i =0; i<3; i++)
    {
         cout << fruit;
    }
    
    


          system("pause");
          return 0;
   
} //end main ( )

/* Display of above program

*/
