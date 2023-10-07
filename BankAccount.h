#pragma once
#include "Account.h"
using namespace std;

class BankAccount : public Account {
private:
    string name;
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
