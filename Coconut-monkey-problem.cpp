//Project 1 extra credit problem
//Purpose: Solve coconut monkey problem for lowest possible original coconuts
//		   in a way that shows work
//Author: Larsen J Close                Most recent changes: 2/18/2016

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <cmath>  // needed for sqrt()

using namespace std;  // using directive

int main ( void )
	
{
	
	int c;  // original
	
	int q;  // first round
	int w;  // second round
	int e;  // third round
	int r;  // fourth round
	int t;  // fifth round
	int y;  // sixth round in the morning
	
	// demonstration variables
	
	int Q;
	int W;
	int E;
	int R;
	int T;
	int Y;
	
	y = 6;
	
	t = y * 5 + 1 ;
	
	r = t * 5 + 1 ;
	
	e = r * 5 + 1 ;
	
	w = e * 5 + 1 ;
	
	q = w * 5 + 1 ;
	
	cout << "This program will determine the minumum number of coconuts the " << endl;
	cout << "sailors started with and demonstrate how the problem was solved.\n\n";
	
	cout << "The problem is rather simple because the minimum number of coconuts"<< endl;
	cout << "which can be divided into 5 with a remainder of 1 is 6.\n\n" ;
	
	cout << "So in the morning following their clandestine coconut division there "<< endl;
	cout << "must have been 6 coconuts left.\n\n";

	cout << "The round before there must have been 6 * 5 + 1 = 31 for there to be " << endl;
	cout << "a final pile of 6.\n\n";
	
	cout << "When we repeat this pattern we get: "<< t << ", " << r << ", " << e << ", ";
	cout << w << ", and finally " << q << endl;
	cout << "\n\n";
	
	Q = q % 5;
	W = w % 5;
	E = e % 5;
	R = r % 5;
	T = t % 5;
	Y = y % 5;
	
	
	
	cout << "So, originally there were: " << q << " coconuts divided by the first sailor." << endl;
	cout << "Which modulo by 5 = ";
	cout << Q << " verifying our result of " << w << "\n\n";
	
	cout << "Next there were: " << w << " coconuts divided by the second sailor." << endl;
	cout << "Which modulo by 5 = ";
	cout << W << " verifying our result of " << e << "\n\n";
	
	cout << "Next there were: " << e << " coconuts divided by the third sailor." << endl;
	cout << "Which modulo by 5 = ";
	cout << E << " verifying our result of " << r << "\n\n";
	
	cout << "Next there were: " << r << " coconuts divided by the fourth sailor." << endl;
	cout << "Which modulo by 5 = ";
	cout << R << " verifying our result of " << t << "\n\n";
	
	cout << "Next there were: " << t << " coconuts divided by the fifth sailor." << endl;
	cout << "Which modulo by 5 = ";
	cout << T << " verifying our result of " << y << "\n\n";
	
	cout << "Finally there were: " << y << " coconuts divided by everyone in the morning." << endl;
	cout << "Which modulo by 5 = ";
	cout << Y << " verifying our total of " << q << "\n\n";
	
	cout << "Since we know that in the morning the smallest possible number\n";
	cout << "of coconuts that can be divived evenly into 5 with a single\n";
	cout << "remainder is 6 we may conclude our total is the minimum number\n";
	cout << "originally collected.\n\n";
	

    system ("pause");
    return 0;
    
} //end main ( )

/* Display for above program

This program will determine the minumum number of coconuts the
sailors started with and demonstrate how the problem was solved.

The problem is rather simple because the minimum number of coconuts
which can be divided into 5 with a remainder of 1 is 6.

So in the morning following their clandestine coconut division there
must have been 6 coconuts left.

The round before there must have been 6 * 5 + 1 = 31 for there to be
a final pile of 6.

When we repeat this pattern we get: 31, 156, 781, 3906, and finally 19531


So, originally there were: 19531 coconuts divided by the first sailor.
Which modulo by 5 = 1 verifying our result of 3906

Next there were: 3906 coconuts divided by the second sailor.
Which modulo by 5 = 1 verifying our result of 781

Next there were: 781 coconuts divided by the third sailor.
Which modulo by 5 = 1 verifying our result of 156

Next there were: 156 coconuts divided by the fourth sailor.
Which modulo by 5 = 1 verifying our result of 31

Next there were: 31 coconuts divided by the fifth sailor.
Which modulo by 5 = 1 verifying our result of 6

Finally there were: 6 coconuts divided by everyone in the morning.
Which modulo by 5 = 1 verifying our total of 19531

Since we know that in the morning the smallest possible number
of coconuts that can be divived evenly into 5 with a single
remainder is 6 we may conclude our total is the minimum number
originally collected.

Press any key to continue . . .
*/
