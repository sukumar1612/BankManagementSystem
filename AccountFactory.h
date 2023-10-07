#pragma once
#include "Account.h"

class AccountFactory {
public:
    static Account* createAccount();
};
