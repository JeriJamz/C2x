//still working on this account holder
//this is the for cpp
#ifndef _ACCOUNT_  //try to avoid multiple inclusions. ifndef
#define _ACCOUNT_

#include <iostream>
#include <string>
using namespace std;

class Account{

  private:		//Member who info is hidden:
    string name;		//Account holder
    unsigned long num;		//Account number
    double balance;		//Account Balance
    string password;

  public:
    bool init( const string&, unsigned long, double, int);
    void display();

};

#endif		//this is the end of _Account_



