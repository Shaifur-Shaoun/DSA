#include "account.h"
#include <iostream>
using namespace std;
AccountHolder::AccountHolder()
{
balance=0;
}
AccountHolder::AccountHolder(int initialAmount)
{
balance=initialAmount;
}
void AccountHolder::deposit(int amount)
{
balance=balance+amount;
}
void AccountHolder::withdraw(int wAmount)
{
balance = balance - wAmount;
}
void AccountHolder::check_balance()
{
cout<< "your balance is "<<balance<<endl;
}