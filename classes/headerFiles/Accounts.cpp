#include <iostream>
#include "Accounts.h"


Accounts::Accounts(/* args */)
{
}

Accounts::~Accounts()
{
}

double Accounts::get_balance()
{
    std::cout << "Balance for " << name << ": " << balance << std::endl;
    return balance;
}

void Accounts::set_name(std::string name)
{
    name = name;
}

bool Accounts::deposit(double amount)
{
    balance = balance + amount;
    std::cout << "Deposit: " << amount << std::endl;
    std::cout << "Balance for " << name << ": " << balance << std::endl;
    return true;
}

bool Accounts::withdraw(double amount)
{
    bool result = false;

    if ((balance - amount) >= 0)
    {
        balance = balance - amount;
        result = true;
    }
    std::cout << "Withdraw: " << amount << std::endl;
    std::cout << "Balance: " << balance << std::endl;

    return result;
}