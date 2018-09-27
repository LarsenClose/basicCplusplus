//CSC 160 	Homework 1 Due 4/15/16
//Purpose:  Write program for array of integers including various
//          criteria (second array)
//Author: Larsen J Close                Most recent changes: 4/15/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
using namespace std;  // using directive

void unitFill( int n[], int m)
{
     for(int x=0; x<m; x++)
     {
             n[x] = 1;
     } 
}


int main ( void )
{
    int y[5];
    unitFill(y, 5); //fill the y array with unit values (ones)
    cout << "  k  y[k]\n";
    for(int k=0; k<5; k++){
            cout << setw(3) << k << setw(5) << y[k] << endl;
            }


          system("pause");
          return 0;
   
} //end main ( )

/* Display of above program
  k  y[k]
  0    1
  1    1
  2    1
  3    1
  4    1
Press any key to continue . . .

*/
