#pragma once
#include "Account.h"

class BankAccount : public Account {
private:
    std::string name;
    int accountNumber;
    int balance;
public:
    void openAccount() override;
    void showAccount() const override;
    void deposit() override;
    void withdraw() override;
    bool search(int) const override;
    int getAccountNumber() const override;
};
