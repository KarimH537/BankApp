#include <bits/stdc++.h>
#ifndef TASK1_BankAccount_H
#define TASK1_BankAccount_H
 class Client;
using namespace std;

class BankAccount {
private :
    string accountID;
    string accountType;
    double balance;
    Client* pClient;
public :
    static int accountCount;

    virtual ~BankAccount();

    BankAccount();
    BankAccount(double amount);
    void setID(string newID);
    void setBalance(double amount);
    void setType(string newType);
    string getType();
    double getBalance();
    string getID();
    virtual void displayData();

    virtual void withdraw(double amount);
    virtual void deposit(double amount);
    Client* getClient();
    void setClient(Client *clt);
};



#endif //TASK1_S_H
