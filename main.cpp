#include<iostream>
#include "AccountFactory.h"

int findAccount(Account* accounts[], int n, int accountNumber) {
    for(int i = 0; i < n; i++) {
        if(accounts[i]->getAccountNumber() == accountNumber) {
            accounts[i]->showAccount();
            return i;
        }
    }
    return -1;
}

int main() {
    Account* accounts[10];
    int choice;
    int n = 0;
    do {
        std::cout << "1. Open Account\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Search Account\n";
        std::cout << "5. Exit\n";
        std::cout << "Select option: "; std::cin >> choice;
        switch(choice) {
            case 1:
                accounts[n] = AccountFactory::createAccount();
                accounts[n]->openAccount();
                n++;
                break;
            case 2: {
                int accountNumber;
                std::cout << "Enter Account Number: "; std::cin >> accountNumber;
                int index = findAccount(accounts, n, accountNumber);
                if(index != -1) {
                    accounts[index]->deposit();
                } else {
                    std::cout << "Account Not Found!\n";
                }
                break;
            }
            case 3: {
                int accountNumber;
                std::cout << "Enter Account Number: "; std::cin >> accountNumber;
                int index = findAccount(accounts, n, accountNumber);
                if(index != -1) {
                    accounts[index]->withdraw();
                } else {
                    std::cout << "Account Not Found!\n";
                }
                break;
            }
            case 4: {
                int accountNumber;
                std::cout << "Enter Account Number: "; std::cin >> accountNumber;
                int index = findAccount(accounts, n, accountNumber);
                if(index == -1) {
                    std::cout << "Account Not Found!\n";
                }
                break;
            }
            case 5:
                break;
            default:
                std::cout << "Invalid Option!\n";
        }
    } while(choice != 5);
    return 0;
}
