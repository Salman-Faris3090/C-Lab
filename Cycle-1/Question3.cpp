#include <iostream>
class bank
{
private:
    std::string cust_name;
    int acc_no, amount;
    char acc_type;
    int balance;
    int static count;
public:
    void new_acc(int acc_no);
    void withdraw(void);
    void deposit(void);
    void balance_enquiry(void);
    void account_statement(int acc_no);
};
int bank::count;

void bank::new_acc(int acc_no)
{
    std::cout << "\nEnter your Name: ";
    std::cin >> cust_name;
    std::cout << "Select the type of Account you want\nEnter S for Savings\nEnter c for cureent Account\nEnter: ";
    std::cin >> acc_type;
    std::cout << "Enter the Amount you need to deposit: ";
    std::cin >> balance;
    std::cout << "Your Account had been created And the Account number is :" << acc_no;
}

void bank::withdraw()
{
    std::cout << "\nEnter the Amount you want to withdraw\n";
    std::cin >> amount;
    if ((balance - amount) > 500)
    {
        balance = balance - amount;
        std::cout << "Rs." << amount << " is withdrawn";
        std::cout << "\nYour current balance is: " << balance;
    }
    else
    {
        std::cout << "Insufficient Balance";
    }
}

void bank::deposit()
{
    std::cout << "\nEnter the Amount you want to deposit\n";
    std::cin >> amount;
    balance = balance + amount;
    std::cout << "Your current balance is: " << balance;
}

void bank::balance_enquiry()
{
    std::cout << "current balance is: " << balance;
}

void bank::account_statement(int acc_no)
{
    std::cout << "\n********\n";
    std::cout << "Your Account Statement: ";
    std::cout << "\nAccount Holder  : " << cust_name;
    std::cout << "\nAccount No      : " << acc_no;
    std::cout << "\nAccount Type    : " << acc_type;
    std::cout << "\nAccount Balance : Rs." << balance;
    std::cout << "\n*********\n";
}
int main()
{
    int option, amount, acc_no, count = 0;
    std::string choice;
    bank *customer = new bank[100];
    do
    {
        std::cout << "\n*****Welcome To Main Menu Of Our Bank*****\n";
        std::cout << "1.Enter 1 for New Account\n2.Enter 2 to Withdraw\n3.Enter 3 to Deposit\n4.Enter 4 to check balance\n5.Enter 5 for Account Statement\nEnter: ";
        std::cin >> option;

        if (option == 1)
        {
            count++;
            acc_no = count;
            customer[acc_no].new_acc(acc_no);
        }
        else if (option == 2)
        {
            std::cout << "\nEnter your Account Number: ";
            std::cin >> acc_no;
            customer[acc_no].withdraw();
        }
        else if (option == 3)
        {
            std::cout << "\nEnter your Account Number: ";
            std::cin >> acc_no;
            customer[acc_no].deposit();
        }
        else if (option == 4)
        {
            std::cout << "\nEnter your Account Number: ";
            std::cin >> acc_no;
            customer[acc_no].balance_enquiry();
        }
        else if (option == 5)
        {
            std::cout << "\nEnter your Account Number: ";
            std::cin >> acc_no;
            customer[acc_no].account_statement(acc_no);
        }
        else
        {
            std::cout << "Invalid input";
        }

        std::cout << "\n\nDo you want to Continue(yes or no): ";
        std::cin >> choice;
    } while (choice == "yes" or choice =="YES");
    return 0;
}
