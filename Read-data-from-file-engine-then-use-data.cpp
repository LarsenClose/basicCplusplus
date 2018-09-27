//CSC 160 	Project 2 Grade B
//Purpose:  Read data from a file and use a function with the data
//Author: Larsen J Close                Most recent changes: 4/27/16

    
#include <iostream>  // preprocessor directive
#include <iomanip> // needed for most manipulators
#include <fstream> // needed for ofstream

using namespace std;  // using directive

double horsepower( double x, double y)
{
       double hp = ((x*y)/5252);
       
       return hp;
}

int main ( void )
{
    
    double power, speed, torque;
    
    ifstream in_stream;
    in_stream.open("engine_01.dat");
    if(in_stream.fail())
    {
         cout << "Failed to open file 'engine_01.dat'\n";
         exit(1);
    }
    
    cout << "Data from file 'engine_01.dat' with horse power calculated\n";
    cout << " Engine Speed               Torque             Horsepower\n";
    cout << "  (rpm)                     (lb ft)               (hp)" << endl;
    
    ofstream out_stream;
    out_stream.open("engine_02.dat");
    if(out_stream.fail())
    {
         cout << "Failed to open file 'engine_02.dat'\n";
         exit(1);
    }

    
    while(!in_stream.eof()){     
                                      
    in_stream >> speed;
    in_stream >> torque;
    cout << fixed << setprecision(0) << setw(20) << left << speed; 
    cout << setprecision(1) << setw(14) << right << torque;
    cout << setprecision(2) << setw(22) << horsepower( speed, torque)<< endl;
    
    power = horsepower( speed, torque);
    
    out_stream << fixed << setprecision(0) << setw(20) << left << speed; 
    out_stream << setprecision(1) << setw(14) << right << torque;
    out_stream << setprecision(2) << setw(22) << horsepower( speed, torque)<<
    endl;
    
    }
    
    system ("pause");
    in_stream.close();
    out_stream.close();
    return 0;
    
} //end main ( )

/* Output for this program:
Data from file 'engine_01.dat' with horse power calculated
 Engine Speed               Torque             Horsepower
  (rpm)                     (lb ft)               (hp)
1000                         294.3                 56.04
1500                         355.8                101.62
2000                         381.2                145.16
2500                         388.3                184.83
3000                         381.5                217.92
3500                         367.4                244.84
4000                         342.4                260.78
4500                         309.0                264.76
5000                         260.2                247.72
5000                         260.2                247.72
Press any key to continue . . .
*/
