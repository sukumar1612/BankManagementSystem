#include "BankAccount.h"
#include<iostream>

void BankAccount::openAccount() {
    std::cout << "Enter Name: "; std::cin >> name;
    std::cout << "Enter Account Number: "; std::cin >> accountNumber;
    std::cout << "Enter Balance: "; std::cin >> balance;
}

void BankAccount::showAccount() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Balance: " << balance << std::endl;
}

void BankAccount::deposit() {
    int amount;
    std::cout << "Enter Amount to Deposit: "; std::cin >> amount;
    balance += amount;
}

void BankAccount::withdraw() {
    int amount;
    std::cout << "Enter Amount to Withdraw: "; std::cin >> amount;
    if(amount <= balance) balance -= amount;
    else std::cout << "Insufficient Balance!" << std::endl;
}

bool BankAccount::search(int a) const {
    if(accountNumber == a) {
        showAccount();
        return true;
    }
    return false;
}

int BankAccount::getAccountNumber() const {
    return accountNumber;
}
