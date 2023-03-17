/*

This is supposed to be the Fraction tester

*/
#include <iostream>
#include "Fraction.h"

int main(){

    Fraction a, b(-1.5), c(2.25);
    double x = 0.5, y;
    a = x;
    cout << "\nSome test results:\n" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "\nThe Fraction as double values:\n" << endl;

    cout << "a = "<< (double)a << endl;
    cout << "b = " << (double)b << endl;
    cout << "c = " << (double)c << endl;

    cout << endl << "\nAnd the calculate with: \n";
    cout << "a + b = " << ( a + b ) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b =" << (a*b) << endl;

    cin >> a;
    cout << "\nYour Input:		" << a << endl;
    a.simplify();
    cout << "\nSimplified:		" << a << endl;
    cout << "\nAs a double: 	`	" << (double)a << endl;
    cout << "\nEnter a float value	"; cin >> x;
    cout << "\nThis is an an fraction	"'
	 << (Fraction)x << endl;

//this will calculate the sum of b + x
    cout << "\nb = "  << b << endl;
    cout << "\nx = " << x << endl;
// dont not tpye  a = b+ x
    a = b + Fraction(x);
    y = (double)b + x;
    cout << "\nb + x =" << a << endl;
    cout << "\nb + x as a double: " << y << endl;
return 0;
     

}



