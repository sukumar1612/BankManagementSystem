#include "AccountFactory.h"
#include "BankAccount.h"

Account* AccountFactory::createAccount() {
    return new BankAccount();
}
