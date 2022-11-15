#include <bits/stdc++.h>
#ifndef TASK1_SavingsBankAccount_H
#define TASK1_SavingsBankAccount_H
#include "BankAccount.h"

class SavingsBankAccount : public BankAccount {
private:
    double minimumBalance = 1000;
public:
    SavingsBankAccount();
    SavingsBankAccount(double amount, double minBalance = 1000);
    void setMinBalance(double minAmount);
    double getMinBalance();
    void displayData();

    void withdraw (double amount);
    void deposit( double amount);


};

#endif //TASK1_S_H
