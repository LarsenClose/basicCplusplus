//CSC 160 	Final Exam 1 
//Purpose:  
//Author: Larsen J Close                Most recent changes: 5/6/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
using namespace std;  // using directive

void display(int x[], int y)
{
     for(int d = 0; d < y; d++)
     {
             cout << setw(3) << x[d];        
     }
     
}

void sort(int p[], int q)
{

     for(int i = 0; i < q; i++)
	{

		for (int j = 0; j < q-1; j++)
        {
            if (p[j] > p[j+1])
			{
				int temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
        }/*End inner for loop*/
	}/*End outer for loop*/  
}

int main ( void )
{
    const int N = 10;
    int P[N] = {17, 56, 39, 44, 72, 98, 66, 38, 83, 12};
    cout << " P[] before being sorted:\n";
    display(P, N);
    sort(P, N);
    cout << "\n\n P[] after being sorted:\n";
    display(P, N);
    
    cout << "\n\n";
    
          system("pause");
          return 0;
   
} //end main ( )

/* Display of above program
 P[] before being sorted:
 17 56 39 44 72 98 66 38 83 12

 P[] after being sorted:
 12 17 38 39 44 56 66 72 83 98

Press any key to continue . . .
*/
