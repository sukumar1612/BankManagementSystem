#include "BankAccount.h"
#include<iostream>
using namespace std;


void BankAccount::openAccount() {
    cout << "Enter Name: "; cin >> name;
    cout << "Enter Account Number: "; cin >> accountNumber;
    cout << "Enter Balance: "; cin >> balance;
}

void BankAccount::showAccount() const {
    cout << "Name: " << name << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
}

void BankAccount::deposit() {
    int amount;
    cout << "Enter Amount to Deposit: "; cin >> amount;
    balance += amount;
}

void BankAccount::withdraw() {
    int amount;
    cout << "Enter Amount to Withdraw: "; cin >> amount;
    if(amount <= balance) balance -= amount;
    else cout << "Insufficient Balance!" << endl;
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
