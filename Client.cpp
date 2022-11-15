#include "Client.h"
#include "BankAccount.h"

Client::Client() {
};

Client::Client(string name, int phone, string address) {
    userName = name;
    userPhone = phone;
    userAddress = address;
}

void Client::setName(string name) {
    userName = name;
}

void Client::setAddress(string address) {
    userAddress = address;
}

void Client::setPhone(int num) {
    userPhone = num;
}

void Client::displayData() {
    cout << "Name: " << userName << endl;
    cout << "Address: " << userAddress << endl;
    cout << "Phone: " << userPhone << endl;
}

string Client::getName() {
    return userName;
}

string Client::getAddress() {
    return userAddress;
}

int Client::getPhone() {
    return userPhone;
}

void Client::setAccount(BankAccount *bnk) {
    pBankAccount = bnk;
}

BankAccount *Client::getBankAccount() {
    return pBankAccount;
}

Client::~Client() {
    if (pBankAccount->getClient() != nullptr) {
        delete pBankAccount->getClient();
        pBankAccount->setClient(nullptr);
    }
    delete pBankAccount;
}
