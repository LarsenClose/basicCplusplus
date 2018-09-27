//CSC 160 	Quiz 3 part B 2  
//Purpose:  Write program for three functions with array
//Author: Larsen J Close                Most recent changes: 4/22/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
using namespace std;  // using directive

const int M = 3;


void display(int y[][M])
{
     for( int t = 0; t<M ; t++)
     {
          for( int u = 0; u<M; u++)
          {
                cout << setw(5) << y[t][u];
                if( u == 2)
                cout << endl;
          }
     }
     
}

void fill(int x[][M])
{
     
     
     for( int n = 0; n<M; n++)
     {
           for(int m = 0; m<M; m++)
           
              if( m == n)
                   x[n][m] = 1; 
              else 
                   x[n][m] = 0;
     }
}

int main ( void )
{
    int z[M][M]; // create empty 2D array 3x3
    fill(z);
    cout << "\nDisplay of the z array\n";
    display(z);


          system("pause");
          return 0;
   
} //end main ( )

/* Display of above program

Display of the z array
    1    0    0
    0    1    0
    0    0    1
Press any key to continue . . .
*/
