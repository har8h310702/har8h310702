#include <iostream>
#include <string>
using namespace std;
class Bill
{
protected:
    double amount;

public:
    Bill(double amt) : amount(amt) {}
    virtual void displayBillInfo()
    {
        cout << "Bill Amount: $" << amount << endl;
    }
    virtual void makePayment() = 0;
};
class ChequePayment : public Bill
{
private:
    string chequeNumber;

public:
    ChequePayment(double amt, const string &num) : Bill(amt), chequeNumber(num) {}
    void displayBillInfo()
    {
        cout << "Cheque Payment: " << endl;
        cout << "Bill Amount : $ " << amount << endl;
        cout << "Cheque Number: " << chequeNumber << endl;
    }
    void makePayment()
    {
        cout << "Paid by cheque." << endl;
    }
};
class CashPayment : public Bill
{
public:
    CashPayment(double amt) : Bill(amt) {}
    void displayBillInfo()
    {
        cout << "Cash Payment: " << endl;
        cout << "Bill Amount: $" << amount << endl;
    }
    void makePayment()
    {
        cout << "Paid in cash." << endl;
    }
};
int main()
{
    double billAmount;
    cout << "enter the bill amount: $";
    cin >> billAmount;
    string paymentType;
    cout << "Enter payment type (cash/cheque): ";
    cin >> paymentType;
    Bill *payment;
    if (paymentType == "cash")
        payment = new CashPayment(billAmount);
    else if (paymentType == "cheque")
    {
        string chequeNumber;
        cout << "Enter cheque number: ";
        cin >> chequeNumber;
        payment = new ChequePayment(billAmount, chequeNumber);
    }
    else
    {
        cout << "Invalid payment type." << endl;
        return 1;
    }
    payment->displayBillInfo();
    payment->makePayment();
    delete payment;
    return 0;
}