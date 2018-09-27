//CSC 160 	Quiz #2 Part B
//Purpose:  Write exam program
//Author: Larsen J Close                Most recent changes: 4/8/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators

using namespace std;  // using directive

int main ( void )
{
     int k;
     int n = 0;
     int y = 0;
     double average = 0;
     int small = 1000;
     
     int array[] = {14, 24, 71, 98, 21, 23, 76, 62, 39};
     
     cout << "(1) Display all array elements: \n";
     for(k=0; k<8; k++)
          cout << setw(3) << array[k];
     
     cout << "\n\n";
     
     cout << "(2) Search and display smallest integer: ";
     
     while(n<8){
          if (array[n] < small)
          {
               small = array[n];
          } 
               n++;
               }
     
     cout << small;
     cout << "\n\n";
     
     cout << "(3) Search and display all even integers: \n";
     
     for(k=0; k<8; k++){
     if (array[k] % 2 == 0 )
        cout << setw(3) << array[k] ;}
     
     cout << " \n\n";
     
     cout << "(4) Calculate and display the average of all elements in array\n";

     do{
          average = array[y] + average;
          y++;
          }
     while(y<8);
     
     average = average / 9;
     
     cout << fixed << setprecision(2) << average;
     
        
     cout << "\n\n";
                   

          system("pause");
          return 0;
   
} //end main ( )

/* Display of above program

(1) Display all array elements:
 14 24 71 98 21 23 76 62

(2) Search and display smallest integer: 14

(3) Search and display all even integers:
 14 24 98 76 62

(4) Calculate and display the average of all elements in array
43.22

Press any key to continue . . .

*/
