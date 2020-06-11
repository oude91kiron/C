

#ifndef RATIONAL_H
#define RATIONAL_H
class Rational
{
public:
 Rational( int = 0, int = 1 ); // default constructor
 ~Rational(); // destructor
 Rational addition( const Rational & ); // function addition
 Rational subtraction( const Rational & ); // function subtraction
 Rational multiplication( const Rational & ); // function multi.
 Rational division( const Rational & ); // function division
 void printRational (); // print rational format
 void printRationalAsDouble(); // print rational as double format

 // Static member function
 static unsigned int getCount(); // return # of objects instantiated
private:
 int numerator; // integer numerator
 int denominator; // integer denominator
 void reduction(); // utility function

 // Static data
 static unsigned int count; //# of objects instantiated
}; // end class Rational
#endif
