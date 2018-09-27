//CSC 160 	In class practice 4/15/16
//Purpose:  Copy program and write function
//Author: Larsen J Close                Most recent changes: 4/8/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators

using namespace std;  // using directive

void squareIt(int x[], int n)
     {
          cout  << "  k   " << "x[k]" << "  Square of x[k]\n";
          for(int k=0; k<n; k++){
                  int sValue = x[k] * x[k];
          cout << setw(3) << k << setw(5) << x[k] << setw(10)<< sValue << endl;
                                  }
     }
            

int main ( void )
{
    int x[5] = {7, 1, 4, 6, 9};
    squareIt(x, 5);


          system("pause");
          return 0;
   
} //end main ( )

/* Display of above program

  k   x[k]  Square of x[k]
  0    7        49
  1    1         1
  2    4        16
  3    6        36
  4    9        81
Press any key to continue . . .

*/
