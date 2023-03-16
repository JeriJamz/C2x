/*
BOOK Work!
This program will draw an ellipse
Been a min since i studied my cpp
This def dont work properly but hey. I learned something. Ima make CPP do math.
Think itll be good at that
*/
#include <iostream>
#include <cmath>	//so you can get sin() cos()
using namespace std;

#define CLS		(cout << "\033[2J")
#define LOCATE(z,s)	(cout << "\033["<<(z)<<';'<<(s)<<'H')
#define DOT(x,y)	(LOCATE(y,x) << '*')

#define PI 3.1416
#define Mx 40  //these are points onna plot(or the window)
#define My 12  //this is the center point
#define A  25  // main axis
#define B  10  // length of subsidiary axis

int main(){//this is where an actual program is ran

  int x,y;
  
  CLS;

    for(double t = 0.0 ; t <= PI/2 ; t += 0.03){

	x = (int) (A * cos(t) + 0.5);
	y = (int) (B * sin(t) + 0.5);
	DOT( x+Mx, y+My);
	DOT(x+Mx, -y+My);
	DOT(-x+Mx, y+My);//theses are plot points
	DOT(-x+Mx, -y+My);
}
    LOCATE(24,0);
return 0;
}









