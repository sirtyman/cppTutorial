#include "Accounts.h"


int main()
{
    Accounts account;

    account.set_name("Marcin");
    account.get_balance();
    account.deposit(1000);
    account.withdraw(500);
    account.get_balance();

    return EXIT_SUCCESS;
}