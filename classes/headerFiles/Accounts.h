#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Accounts
{
private:
    std::string name {""};
    double balance {0};
public:
    Accounts(/* args */);
    ~Accounts();

    void set_name(std::string name);
    double get_balance();
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // _ACCOUNT_H_
