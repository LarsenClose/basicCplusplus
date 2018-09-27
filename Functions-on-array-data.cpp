//CSC 160 	Graded lab excercise #2
//Purpose:  Write program 
//Author: Larsen J Close                Most recent changes: 4/15/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
using namespace std;  // using directive


double average(double x[], int y);
double sum( double m[], int p);

int main ( void )
{
    const int N = 5;
    double weight[N] = {12.3, 31.5, 64.1, 27.8, 45.7}; //weight lbs for N zots
    cout << fixed << setprecision(2);
    cout << "The average weight of " << N << " zots is ";
    cout << average(weight, N) << " lbs\n";

    cout << "The total weight of " << N << " zots is ";
    cout << sum(weight, N) << " lbs.\n";
    
    system("pause");
    return 0;
    

} //end main()

double average(double x[], int y)
{
     double average = sum(x, y)/5;
     
     return average;
}

double sum( double m[], int p)
{
       double total = 0;
       for (int n = 0; n < p; n++)
       {
           total = total + m[n];
       }

       return total;
}

/*
The average weight of 5 zots is 36.28 lbs
The total weight of 5 zots is 181.40 lbs.
Press any key to continue . . .
*/
