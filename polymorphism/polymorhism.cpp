#include <iostream>
using namespace std;

// Base class
class Payment {
public:
    virtual void makePayment() {
        cout << "Making a general payment."
             << endl;
    }

    virtual ~Payment() {}
};

// First derived class
class CashPayment : public Payment {
public:
    void makePayment() override {
        cout << "Payment made using cash."
             << endl;
    }
};

// Second derived class
class MobileMoneyPayment : public Payment {
public:
    void makePayment() override {
        cout << "Payment made using mobile money."
             << endl;
    }
};

int main() {
    CashPayment cash;
    MobileMoneyPayment mobile;

    // Base-class pointer
    Payment* ptr;

    ptr = &cash;
    ptr->makePayment();

    ptr = &mobile;
    ptr->makePayment();

    return 0;
}