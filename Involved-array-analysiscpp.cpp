//CSC 160 	Project 2 Grade A
//Purpose:  Write function for program
//Author: Larsen J Close                Most recent changes: 4/27/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <cmath> 

using namespace std;  // using directive


double average( double n[], int m)
{
       double sum = 0;
       double average;
       
       for( int w = 0; w < m; w++)
       {
            sum = sum + n[w];     
       }
       
       average = sum / m;
       
       return average;
       
}

double bigAbsolute( double bn[], int bm)
{
        double big = abs(bn[0]);
       
        for( int p = 0; p < bm; p++)
        {
             
             double two = abs(bn[p]);
             
             if ( two > big )
             big = two;  
        }
        
        return big;
}

int numNegative ( double nn[], int nm)
{
        int total = 0;
    
        for( int r = 0; r < nm; r++)
        {
             if ( nn[r] < 0 )
             
             total++; 
        }
      
      return total;
}

double loHighRange (double ln[], int lm)
{
       double high = ln[0];
       double low  = ln[0];
       double range;
       
       for( int e = 0; e < lm; e++)
        {
           
           if(ln[e] > high)
               high = ln[e];
           
           if(ln[e] < low)
               low = ln[e];
        }
       
       range = high - low;
       
       return range;
}


void showArray( double array[], int size, int column)
{
     int counter = 0;
     for (int k = 0; k < size; k++)
     {
         
          cout << setw(8) << array[k]; 
          counter++;
          
          if(counter == column){
          cout<<endl;
          counter = 0;
          }
     }

     
     cout << "\n";
}



int main ( void )
{
    const int ASIZE = 21, //number of elements in A array
              BSIZE = 12; //B array
    int j, columns;
    double a, b, c;
    
    double A[ASIZE] = {-44.56,  32.81,  17.96,  24.23, -26.49, -35.35,  40.17,
                        37.41,  10.07, -25.72,  21.58,  42.76,  18.22, -21.96,
                        41.30, -19.96,  41.67, -32.83, -13.51,  26.97, -35.11};
    
    double B[BSIZE] = { 72.38,  56.29, -15.83,  98.60, -32.26, -12.64,
                       -67.74, -38.68,  13.96,  55.07,  27.16, -11.73};
    
    a = average(A, ASIZE);
    b = bigAbsolute(A, ASIZE);
    j = numNegative(A, ASIZE);
    c = loHighRange(A, ASIZE);
    
    cout << fixed << setprecision(1);
    cout << "For the following array:\n";
    
    columns = 7;
    
    showArray(A, ASIZE, columns);
    
    cout << "The average value is " << a << endl;
    cout << "The largest absolute value is " << b << endl;
    cout << "There are " << j << " negative values in the array\n";
    cout << "The range between the smallest and largest values is "<< c << endl;
    
    cout << fixed << setprecision(2);
    cout << "\nFor the following array:\n";
    
    showArray(B, BSIZE, 6);
    cout << "The average value is " << average(B, BSIZE) << endl;
    cout << "The largest absolute value is " << bigAbsolute(B, BSIZE)<< endl;
    
    cout << "There are " << numNegative(B, BSIZE) << " negative values in the array\n";
    
    cout << "The range between the smallest and largest values is " << loHighRange(B, BSIZE) << endl;
    
 
    
    system ("pause");
    return 0;
    
} //end main ( )

/* Output for this program:   
For the following array:
   -44.6    32.8    18.0    24.2   -26.5   -35.4    40.2
    37.4    10.1   -25.7    21.6    42.8    18.2   -22.0
    41.3   -20.0    41.7   -32.8   -13.5    27.0   -35.1

The average value is 4.7
The largest absolute value is 44.6
There are 9 negative values in the array
The range between the smallest and largest values is 87.3

For the following array:
   72.38   56.29  -15.83   98.60  -32.26  -12.64
  -67.74  -38.68   13.96   55.07   27.16  -11.73

The average value is 12.05
The largest absolute value is 98.60
There are 6 negative values in the array
The range between the smallest and largest values is 166.34
Press any key to continue . . .
*/
