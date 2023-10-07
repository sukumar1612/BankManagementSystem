#include<iostream>
#include "AccountFactory.h"
using namespace std;

int findAccount(Account* accounts[], int n, int accountNumber) {
    for(int i = 0; i < n; i++) {
        if(accounts[i]->getAccountNumber() == accountNumber) {
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
        for(int i=0;i<n;i++){
            cout<<accounts[i]->getAccountNumber()<<endl;
        }

        cout << "1. Open Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Search Account\n";
        cout << "5. Exit\n";
        cout << "Select option: "; cin >> choice;
        switch(choice) {
            case 1:
                accounts[n] = AccountFactory::createAccount();
                accounts[n]->openAccount();
                n++;
                break;
            case 2: {
                int accountNumber;
                cout << "Enter Account Number: "; cin >> accountNumber;
                int index = findAccount(accounts, n, accountNumber);
                if(index != -1) {
                    accounts[index]->deposit();
                } else {
                    cout << "Account Not Found!\n";
                }
                break;
            }
            case 3: {
                int accountNumber;
                cout << "Enter Account Number: "; cin >> accountNumber;
                int index = findAccount(accounts, n, accountNumber);
                if(index != -1) {
                    accounts[index]->withdraw();
                } else {
                    cout << "Account Not Found!\n";
                }
                break;
            }
            case 4: {
                int accountNumber;
                cout << "Enter Account Number: "; cin >> accountNumber;
                int index = findAccount(accounts, n, accountNumber);
                if(index == -1) {
                    cout << "Account Not Found!\n";
                }else{
                    accounts[index]->showAccount();
                }
                break;
            }
            case 5:
                break;
            default:
                cout << "Invalid Option!\n";
        }
    } while(choice != 5);
    return 0;
}
