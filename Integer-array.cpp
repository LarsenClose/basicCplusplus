//CSC 160 	Homework 1 Due 4/8/16
//Purpose:  Write program for array of integers including various
//          criteria
//Author: Larsen J Close                Most recent changes: 4/7/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators

using namespace std;  // using directive

int main ( void )
{
     int k;
     int low, high;
     int largest = 0;
     int array[] = {43, 24, 71, 98, 19, 53, 76, 62, 39, 16,
                   51, 67, 47, 75, 23, 82, 39, 76, 25, 61};
     
     cout << "(1) Display all array elements: \n";
     for(k=0; k<20; k++)
          cout << setw(5) << array[k];
     
     cout << "\n\n";
     
     cout << "(2) Search and display largest integer: ";
     for(k=0; k<20; k++){
          if (array[k] > largest)
               largest = array[k];}
     
     cout << largest;
     cout << "\n\n";
     
     cout << "(3) Search and display all odd integers: \n";
     
     for(k=0; k<20; k++){
     if (array[k] % 2 == 1 )
        cout << setw(5) << array[k] ;}
     
     cout << " \n\n";
     
     cout << "(4) Display all integers within user designated range\n";
     cout << "Please input the lower end of the range: ";
     cin >> low;
     cout << "Please input the upper end of the range: ";
     cin >> high;
     cout << "The integers within that range are: \n";
     
      for(k=0; k<20; k++){
     if (array[k] >= low && array[k] <= high )
        cout << setw(5) << array[k];}
        
     cout << "\n\n";
                   

          system("pause");
          return 0;
   
} //end main ( )

/* Display of above program

(1) Display all array elements:
   43   24   71   98   19   53   76   62   39   16   51   67   47   75   23   82
   39   76   25   61

(2) Search and display largest integer: 98

(3) Search and display all odd integers:
   43   71   19   53   39   51   67   47   75   23   39   25   61

(4) Display all integers within user designated range
Please input the lower end of the range: 20
Please input the upper end of the range: 50
The integers within that range are:
   43   24   39   47   23   39   25

Press any key to continue . . .

*/
