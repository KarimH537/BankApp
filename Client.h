//
// Created by Saif on 11/10/2022.
//
#include <bits/stdc++.h>

#ifndef TASK1_Client_H
#define TASK1_Client_H
using namespace std;
class BankAccount;

class Client {

private:
    string userName;
    int userPhone;
    string userAddress;
    BankAccount* pBankAccount;
public:
    Client();
    ~Client();
    Client(string name, int phone, string address);
    void setName(string name);
    void setPhone(int num);
    void setAddress(string address);
    void displayData();
    string getName();
    int getPhone();
    string getAddress();
    BankAccount* getBankAccount();
    void setAccount(BankAccount *bnk);
};

#endif //TASK1_S_H
