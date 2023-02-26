//this is some mess around. running an example out the book
#include <iostream>
using namespace std;

int main(){

    cout << showpos << 123; //+123, supposed to be, cool this works
    cout.setf(ios::showpos);
    cout<<endl <<123<<"\n";
    cout <<endl << 22<< "\n";
    cout << noshowpos << 123; //this should turn it off

}



