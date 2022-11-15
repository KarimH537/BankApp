#include "BankAccount.h"
#include "Client.h"
int BankAccount::accountCount = 1;

//Default constructor sets balance to 0.
BankAccount::BankAccount() {
    accountID = "FCAI-" + to_string(accountCount);
    accountCount++;
    accountType = "Basic";
    balance = 0;
    pClient = nullptr;
}

//Constructor sets balance to a given value
BankAccount::BankAccount(double amount) {
    accountID = string ( "FCAI-" + to_string(accountCount) );
    accountCount++;
    accountType = "Basic";
    balance = amount;
}

//Setters and Getters
void BankAccount::setBalance(double amount) {
    balance = amount;
}

void BankAccount::setID(string newID){
    accountID = newID;
}
void BankAccount::setType(std::string newType) {
    accountType = newType;
}

string BankAccount::getType() {
    return accountType;
}
double BankAccount::getBalance() {
    return balance;
}
string BankAccount::getID() {
    return accountID;
}

void BankAccount::displayData() {
    cout<<"ID : " <<accountID << endl;
    cout<<"Type : " <<accountType << endl;
    cout<< "Balance : " <<balance << endl;
}


//Withdraw function
void BankAccount::withdraw(double amount) {
    while( amount > balance ) {
        cout << "Sorry insufficient amount, This is more than your balance.\n ";
        cout << "Your balance is: " << balance << ',';
        cout << "Please Enter The Amount to Withdraw. =>  " ;
        cin >> amount;
    }
    setBalance( getBalance()-amount ) ;
}

//Deposit function
void BankAccount::deposit(double amount) {
    setBalance(getBalance()+amount);
    cout <<"Successfully Deposited. \n";
}

void BankAccount :: setClient(Client* clt){
    pClient = clt;
}

Client *BankAccount::getClient() {
    return pClient;
}

BankAccount::~BankAccount() {
delete pClient->getBankAccount();
    pClient->setAccount(nullptr);
    delete pClient;
}
