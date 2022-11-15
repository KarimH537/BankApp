#include <bits/stdc++.h>

#ifndef TASK1_BANKINGAPPLICATION_H
#define TASK1_BANKINGAPPLICATION_H
class Client;
using namespace std;

class BankingApplication {
public:
    BankingApplication();
    map<string,Client*> Data;
    void displayMenu();
};







#endif //TASK1_BANKINGAPPLICATION_H
