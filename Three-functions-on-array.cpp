//CSC 160 	Homework 1 Due 4/22/16
//Purpose:  Write program for three functions with array
//Author: Larsen J Close                Most recent changes: 4/22/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
using namespace std;  // using directive

const int N = 5;

double maxValue(int x[][N])
{
    double max = x[0][0];
    int i, j;
    
    for (i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
                 
        if( x[i][j] > max)
            max = x[i][j];
        }    
    }

    return max;
}


double rowMax(int y[][N], int r)
{
    int t;
    double rM = y[r][0];
    for(t=0; t<5; t++)
    {
    if(y[r][t] > rM)
        rM = y[r][t];         
    }
    
    return rM;
}

double colMin( int z[][N], int c)
{
    int l;
    double cM = z[0][c];
    
    for(l=0; l < 5; l++)
    {
         if( z[l][c] < cM)
           cM = z[l][c];        
    }
    return cM;
}


int main ( void )
{
    int row, col;
    int data[][N]  = {{78, 92, 72, 68, 46},
                      {88, 87, 90, 40, 79},
                      {56, 61, 48, 54, 63},
                      {42, 76, 67, 79, 85},
                      {77, 48, 55, 87, 47}};
    
    cout << "\nMax value in the data array is " << maxValue(data);
    
    cout << "\nMax value in the top row is " << rowMax(data, 0);
    cout << "\nMax value in the bottom row is " << rowMax(data, 4);
    
    cout << "\nLow value in the leftmost column is " << colMin(data, 0);
    cout << "\nLow value in the rightmost column is " << colMin(data, 4);
    cout << endl;


          system("pause");
          return 0;
   
} //end main ( )

/* Display of above program
Max value in the data array is 92
Max value in the top row is 92
Max value in the bottom row is 87
Low value in the leftmost column is 42
Low value in the rightmost column is 46
Press any key to continue . . .
*/
