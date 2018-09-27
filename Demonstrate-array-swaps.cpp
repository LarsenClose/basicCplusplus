//CSC 160 	Quiz 3 part B 
//Purpose:  Write program for three functions with array
//Author: Larsen J Close                Most recent changes: 4/22/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
using namespace std;  // using directive



void display(double x[], int y)
{
     for( int t = 0; t<y ; t++)
     {
     cout << setw(5) << x[t];
     }
     
}

void exchange(double z[], int q, int w)
{
swap(z[q], z[w]);
}

int main ( void )
{

    const int N = 7;
    double p[N] = {1.2, 4.3, 2.7, 9.1, 6.8, 3.4, 7.5};
    cout << "\n p array before exchange\n";
    display(p, N);
    //use exchange to swap positions of p[2] and p[5]
    exchange(p, 2, 5);
    cout << "\n p array after first exchange\n";
    display(p, N);
    
    //use exchange to swap 6-1
    exchange(p, 6, 1);
    cout << "\n p array after second exchange\n";
    display(p, N);


          system("pause");
          return 0;
   
} //end main ( )

/* Display of above program
Max value in the data array is 92

 p array before exchange
  1.2  4.3  2.7  9.1  6.8  3.4  7.5
 p array after first exchange
  1.2  4.3  3.4  9.1  6.8  2.7  7.5
 p array after second exchange
  1.2  7.5  3.4  9.1  6.8  2.7  4.3
Press any key to continue . . .
*/
