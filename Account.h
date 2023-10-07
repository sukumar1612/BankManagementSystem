#pragma once
#include<string>

class Account {
public:
    virtual void openAccount() = 0;
    virtual void showAccount() const = 0;
    virtual void deposit() = 0;
    virtual void withdraw() = 0;
    virtual bool search(int) const = 0;
    virtual int getAccountNumber() const = 0;
};
