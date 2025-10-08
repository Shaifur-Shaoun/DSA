#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
class AccountHolder
{
private:
int balance;
public:
AccountHolder();
AccountHolder(int);
void deposit(int);
void check_balance();
void withdraw(int);
};
#endif // ACCOUNT_H_INCLUDED