//the account
//defines init() and display()

#include "account.h"
//#include "HolNfo.h"
#include <iostream>
#include <iomanip>
using namespace std;

//The init() method copies the given argument into private members of the class
bool Account::init(const string& i_name,
		   const string& i_password,
//		   const string& i_SecAn1,
//		   const string& i_SecAn2,
//		   const string& i_SecAn3,
//		   const string& i_Birthplace,
		   unsigned long i_num,
		   double	 i_balance,
//		   int		 i_age)
{

    if( i_name.size() < 1) //if name less than 1(or 0) 
	return false;
    name = i_name;
    password = i_password;
    num = i_num;
    Balance = i_balance;
  return true;
}

//this is making the display()
void Account::display()
{

    cout << fixed << setprecision(2)
	 << "-------------------------------------------------------\n"
	 << "Account Holder	" << name << '\n'
	 << "Account Number	" << num << '\n'
	 << "Account Balance	" << Balance << '\n'
	 << "Account PassWord :)" << password << '\n'
	 << "-------------------------------------------------------\n"
	 << endl;

}


