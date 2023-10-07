#include<iostream>
#include<string>

using namespace std;

class Bank {
public:
    string n;
    int accNo;
    int bal;
    void openAccount();
    void showAccount();
    void deposit();
    void withdraw();
    bool search(int);
};

void Bank::openAccount() {
    cout << "Enter Name: "; cin >> n;
    cout << "Enter Account Number: "; cin >> accNo;
    cout << "Enter Balance: "; cin >> bal;
}

void Bank::showAccount() {
    cout << "Name: " << n << endl;
    cout << "Account Number: " << accNo << endl;
    cout << "Balance: " << bal << endl;
}

void Bank::deposit() {
    int amt;
    cout << "Enter Amount to Deposit: "; cin >> amt;
    bal += amt;
}

void Bank::withdraw() {
    int amt;
    cout << "Enter Amount to Withdraw: "; cin >> amt;
    if(amt <= bal) bal -= amt;
    else cout << "Insufficient Balance!" << endl;
}

bool Bank::search(int a) {
    if(accNo == a) {
        showAccount();
        return true;
    }
    return false;
}

int main() {
    Bank B[10];
    int ch;
    int x, k;
    int n = 0;
    do {
        cout << "1. Open Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Search Account\n";
        cout << "5. Exit\n";
        cout << "Select option: ";
        cin >> ch;
        switch(ch) {
            case 1:
                B[n].openAccount();
                n++;
                break;
            case 2:
                cout << "Enter Account Number: "; cin >> x;
                for(k=0; k<=n; k++) {
                    if(B[k].search(x)) {
                        B[k].deposit();
                        break;
                    }
                }
                if(k == n+1) cout << "Account Not Found!\n";
                break;
            case 3:
                cout << "Enter Account Number: "; cin >> x;
                for(k=0; k<=n; k++) {
                    if(B[k].search(x)) {
                        B[k].withdraw();
                        break;
                    }
                }
                if(k == n+1) cout << "Account Not Found!\n";
                break;
            case 4:
                cout << "Enter Account Number: "; cin >> x;
                for(k=0; k<=n; k++) {
                    if(B[k].search(x)) break;
                }
                if(k == n+1) cout << "Account Not Found!\n";
                break;
            case 5:
                break;
            default:
                cout << "Invalid Option!\n";
        }
    } while(ch != 5);
    return 0;
}
