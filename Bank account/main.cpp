#include <iostream>
#include "account.h"
#include "account.cpp"
using namespace std;
int main()
{
int iniAmount;
cout << "creating object!" << endl;
AccountHolder captainPlanet;
captainPlanet.check_balance();
cout<< "enter your initial amount Rahim: ";
cin>>iniAmount;
AccountHolder rahim(iniAmount);
rahim.check_balance();
int amt=0;
cout<< "please enter the amount to deposite "<<endl;
cin>>amt;
rahim.deposit(amt);
rahim.check_balance();
// captainPlanet.deposit(amt);
// captainPlanet.check_balance();
return 0;
}
