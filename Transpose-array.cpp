//CSC 160 	Final Exam 3
//Purpose:  
//Author: Larsen J Close                Most recent changes: 5/6/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
using namespace std;  // using directive

const int NROWS = 4;
const int NCOLS = 4;

void display( int B[][NCOLS] )
{
     for(int i = 0; i < NCOLS; i++)
     {
             for(int x = 0; x < NROWS; x++)
             {
                     cout << setw(4) << B[i][x];
             }
             cout << endl;   
     }
     cout << "\n";
}

void transpose( int B[][NCOLS], int Q[][NCOLS])
{
     for(int i = 0; i < NCOLS; i++)
     {
             for(int x = 0; x < NROWS; x++)
             {
                     Q[x][i] = B[i][x];
             }
     }

}


int main ( void )
{
    int P[][NCOLS] = {5, 3, 9, 2, 4, 1, 6, 3, 0, 8, 7, 5, 2, 6, 9, 1};
    int Q[NROWS][NCOLS];
    cout << "P[][] before transposing\n";
    display(P);
    transpose(P, Q);
    cout << "Q[][] as the transpose of P[][]\n";
    display(Q);
    
    system("pause");
    return 0;
   
} //end main ( )


/* Display of above program
P[][] before transposing
   5   3   9   2
   4   1   6   3
   0   8   7   5
   2   6   9   1

Q[][] as the transpose of P[][]
   5   4   0   2
   3   1   8   6
   9   6   7   9
   2   3   5   1

Press any key to continue . . .
*/
