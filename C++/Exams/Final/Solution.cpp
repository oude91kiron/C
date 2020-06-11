// This app doesn't run on IDE cloud (work by codeBlocks)

#include <iostream>
using std::cout;
using std::endl;
#include "Rational.h" // include definition of class Rational
int main()
{

 cout << "# of objects: " << Rational::getCount() << endl;

 Rational c( 2, 6 ), d( 7, 8 ), x; // creates three rational objects

 cout << "# of objects: " << Rational::getCount() << endl;

 c.printRational(); // prints rational object c
 cout << " + ";
 d.printRational(); // prints rational object d
 x = c.addition( d ); // adds object c and d; sets the value to x
 cout << " = ";
 x.printRational(); // prints rational object x
 cout << '\n';
 x.printRational(); // prints rational object x
 cout << " = ";
 x.printRationalAsDouble(); // prints rational object x as double
 cout << "\n\n";
 c.printRational(); // prints rational object c
 cout << " - ";
 d.printRational(); // prints rational object d
 x = c.subtraction( d ); // subtracts object c and d

 cout << " = ";
 x.printRational(); // prints rational object x
 cout << '\n';
 x.printRational(); // prints rational object x
 cout << " = ";
 x.printRationalAsDouble(); // prints rational object x as double
 cout << "\n\n";
 c.printRational(); // prints rational object c
 cout << " x ";
 d.printRational(); // prints rational object d
 x = c.multiplication( d ); // multiplies object c and d

 cout << " = ";
 x.printRational(); // prints rational object x
 cout << '\n';
 x.printRational(); // prints rational object x
 cout << " = ";
 x.printRationalAsDouble(); // prints rational object x as double
 cout << "\n\n";
 c.printRational(); // prints rational object c
 cout << " / ";
 d.printRational(); // prints rational object d
 x = c.division( d ); // divides object c and d

 cout << " = ";
 x.printRational(); // prints rational object x
 cout << '\n';
 x.printRational(); // prints rational object x
 cout << " = ";
 x.printRationalAsDouble(); // prints rational object x as double
 cout << endl;

 cout << "# of objects: " << Rational::getCount()-3 << endl;

 return 0;
} // end main
