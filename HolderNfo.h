//This is for Account Holder Info
//this is gonna be for cpp
#ifndef _HOLNFO_
#define _HOLNFO_

#include <iostream>
#include <string>
using namespace std;

class HolNfo{

  private:		//Holders private info
    string name;		//the name of holder
    int age;			//The Holder age
    string SecAn1;		//The answer to secuity question one
    string SecAn2;		//Answer to Security question two
    string SecAn3;		//Answer to Security question three
    string Birthplace;		//Birthplace of Holder
    string password;

  public:
    bool init( const string&, int)
    void display();

};

#endif



