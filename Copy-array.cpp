//CSC 160 	Homework 2 Due 4/15/16
//Purpose:  Write program for array of integers including various
//          criteria (second array)
//Author: Larsen J Close                Most recent changes: 4/15/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
using namespace std;  // using directive

void copyPtoQ( int p[], int q[], int z)
{
       for(int x=0; x<z; x++)
     {
             q[x] = p[x];
     } 
}

int main ( void )
{
    int p[5] = {22, 13, 87, 49, 51};
    int q[5] = { };
    
    cout << "  k  p[k]  q[k]\n";
    for(int k=0; k<5; k++){
            cout << setw(3) << k << setw(5) << p[k] << setw(6) << q[k] << endl; 
            }
    
    copyPtoQ(p, q, 5); //copy array p to array q
    
    cout << "\n  k  p[k]  q[k]\n";
    for(int k=0; k<5; k++){
            cout << setw(3) << k << setw(5) << p[k] << setw(6) << q[k] << endl; 
            }
    

system("pause");
return 0;
   
} //end main ( )
/*
  k  p[k]  q[k]
  0   22     0
  1   13     0
  2   87     0
  3   49     0
  4   51     0

  k  p[k]  q[k]
  0   22    22
  1   13    13
  2   87    87
  3   49    49
  4   51    51
Press any key to continue . . .

*/
