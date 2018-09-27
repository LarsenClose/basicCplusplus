//CSC 160 	March 4 in class excercise 2

//Author: Larsen J Close                Most recent changes: 3/4/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators

using namespace std;  // using directive

void getData(double& l, double& w);
void getData(double& l, double& w, double& h);

int main ( void )
{
    double l, w, h;
    cout << "Enter the length and width of a rectangle (inches): \n";
    getData(l, w);
    cout << "Rectangle area = " << l*w << " square inches\n\n";
    
    cout << "Enter the length, width, and height of a box (inches): \n";
    getData(l, w, h);
    cout << "Box volume = " << l*w*h << " cubic inches\n";


    system ("pause");
    return 0;
    
} //end main ( )

void getData(double& l, double& w)
{
     cout << "Length: ";
     cin >> l;
     cout << "Width:  ";
     cin >> w;
}

void getData(double& l, double& w, double& h)
{
     cout << "Length: ";
     cin >> l;
     cout << "Width:  ";
     cin >> w;
     cout << "Height: ";
     cin >> h;
}


/* Output of above program
Enter the length and width of a rectangle (inches):
Length: 20
Width:  10
Rectangle area = 200 square inches

Enter the length, width, and height of a box (inches):
Length: 30
Width:  20
Height: 10
Box volume = 6000 cubic inches
Press any key to continue . . .

*/
