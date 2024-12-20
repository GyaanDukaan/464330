// File: main.cpp
#include "account.h"
#include <iostream>

int main() {
    BankAccount account;
    std::cout << "Interest on $1000: " << account.calculateInterest(1000) << std::endl; // Should output 50.00
    return 0;
}