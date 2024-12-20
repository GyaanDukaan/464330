#include "interest.h"

class BankAccount {
public:
    double calculateInterest(double principal) {
        return principal * INTEREST_RATE; // Calculates interest based on the macro defined interest rate
    }
};