//CSC 160 	Homework 2 due March 11
//Purpose:  Write a program including the indicated code that displays
//          indicated display exactly as shown but that uses a single
//			function
//Author: Larsen J Close                Most recent changes: 3/11/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators

using namespace std;  // using directive


void oddEvenCount (int begin, int end, int& nOdd, int& nEven);

int main ( void )
{
	int begin, end, nOdd, nEven;
	
	cout << "Consider a sequence of consecutive positive integers such as"
	" 2, 3, 4, 5, 6."<< endl;
	
    cout << "It begins with a 2, end with a 6, and contains 2 odd numbers"
    " and 3 even numbers.";
    
    cout << "To get similar information for a sequence of your choice:"<< endl;
    cout << "Enter the first integer of your sequence: ";
    cin >> begin;
    
    cout << "Enter the last integer of your sequence: ";
    cin >> end;
    cout << endl << endl;
    
	oddEvenCount ( begin, end, nOdd, nEven);
	
    cout << "That sequence contains " << nOdd << " odd numbers\n";
	cout << " and " << nEven << " even numbers.\n";
    
    system ("pause");
    return 0;
    
} //end main ( )

void oddEvenCount (int begin, int end, int& nOdd, int& nEven)
{

	int k = begin;
	
	nOdd = 0;
    nEven = 0;
	
		
    while(k != (end + 1))
    {
    
    
		if (begin % 2 == 1)
			nOdd = nOdd + 1;
		
		if (begin % 2 == 0)
			nEven = nEven + 1;
			
			
	begin = begin + 1;
	++k;
	
	}
	

}



/* Output of above program
Consider a sequence of consecutive positive integers such as 2, 3, 4, 5, 6.
It begins with a 2, end with a 6, and contains 2 odd numbers and 3 even numbers.
To get similar information for a sequence of your choice:
Enter the first integer of your sequence: 1
Enter the last integer of your sequence: 7


That sequence contains 4 odd numbers
 and 3 even numbers.
Press any key to continue . . .

Consider a sequence of consecutive positive integers such as 2, 3, 4, 5, 6.
It begins with a 2, end with a 6, and contains 2 odd numbers and 3 even numbers.
To get similar information for a sequence of your choice:
Enter the first integer of your sequence: 0
Enter the last integer of your sequence: 9


That sequence contains 5 odd numbers
 and 5 even numbers.
Press any key to continue . . .

Consider a sequence of consecutive positive integers such as 2, 3, 4, 5, 6.
It begins with a 2, end with a 6, and contains 2 odd numbers and 3 even numbers.
To get similar information for a sequence of your choice:
Enter the first integer of your sequence: 2
Enter the last integer of your sequence: 8


That sequence contains 3 odd numbers
 and 4 even numbers.
Press any key to continue . . .

Consider a sequence of consecutive positive integers such as 2, 3, 4, 5, 6.
It begins with a 2, end with a 6, and contains 2 odd numbers and 3 even numbers.
To get similar information for a sequence of your choice:
Enter the first integer of your sequence: 1
Enter the last integer of your sequence: 2


That sequence contains 1 odd numbers
 and 1 even numbers.
Press any key to continue . . .

*/
