//CSC 160 	Graded lab excercise #1
//Purpose:  Write program 
//Author: Larsen J Close                Most recent changes: 4/15/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators

using namespace std;  // using directive

int main ( void )
{
     int k;
     int n = 0;
     int y = 0;
     double average = 0;
     
     int array[] = {-54, 37, -13, 72, 44, -26, 65, 88};
     
     cout << "(1) Array elements: \n";
     for(k=0; k<7; k = k + 2)
          cout << setw(5) << array[k] << setw(5) << array [k + 1]<< endl;
     
     cout << "\n\n";
     
     cout << "(2) Negative elements in data[]: \n";
     
          do{
          if (array[n] < 0)
          {
               cout << setw(5) << array[n];
          } 
               n++;
               }
     while(n<7);
     
     
     cout << "\n\n";
     
     
     cout << "(3)The average of the 8 elements:\n";

     while(y < 8)
     {
          average = array[y] + average;
          y++;
          }

     
     average = average / 8;
     
     cout << fixed << setprecision(2) << average;
     
        
     cout << "\n\n";
     


          system("pause");
          return 0;
   
} //end main ( )

/* Display of above program
(1) Array elements:
  -54   37
  -13   72
   44  -26
   65   88


(2) Negative elements in data[]:
  -54  -13  -26

(3)The average of the 8 elements:
26.63

Press any key to continue . . .

*/
