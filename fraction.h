/* This is some advance shit
This is over how to make a numerical class 
to repersent fraction*/

#ifndef _FRACTION_
#define _FRACTION_
#include <iostream.h>
#include <stdlib.h>

class Fraction{

  private: long numerator, denominator;

  public:
    Fraction(long z, long h);
    Fraction(double x); //gives it a double constructor
     // default some shit
    Fraction(long z=0);  : numerator(z), denominator(1) {}
    Fraction(int z)	 : numerator(z), denominator(1) {}
    void simplify();
    operator double(){

	return (double)numerator / (double)denominator;

    }
    Fraction operator-() const{

	return Fraction(-numerator, denominator) 
    }
    Fraction& operator += (const Fraction& a){

	numerator = a.numerator * denominator
		    + numerator * a.denominator;
	denominator *= a.denominator;
	simplify();
	return *this;
    } 
    Fraction& operator -=(const Fraction& a){

	*this += (-a);		simplfy();
	return *this;

    }


};

#endif

