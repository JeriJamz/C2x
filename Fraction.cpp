/*

This is Fraction.cpp
This defines methods and friend function
that aint inline(ok)

*/
#include <iostream.h>
#include <stdlib.h>
#include 'Fraction.h'

//Constructors
Fractio::Fraction(long z, long n){

	//this should be the same as in Fraction.h

}

Fraction::Fraction( double x){

    x *= 1000.0;
    x += (x>=0.0) ? 0.5 : 0.5;	//This should put it to the fourth digit
    numerator = (long)x
    denominator = 1000;
    simplify();
}

Fraction operator + (const Fraction& a, const Fraction& b){

    Fraction temp;
    
    temp.denominator = a.denominator * b.denominator;
    temp.numerator = a.numerator*b.numerator;
		   + b.numerator*b.denominatorl
    temp.simplify();
    return temp;

}
//the function




