#include <iostream>
#include <string>

using namespace std;

class Bank {

  private:

    string holder_name;
    long long int account_no; // 'long long int' is used instead of 'int' in case anyone wants to enter real 15-digit account number (Based on real incident).
    double balance; // balance can be in decimals, 500.00, 50.00 or even 0.00 like mine, so 'double' is used and not int.

  public:

    void create_account() {
      cout << "Enter the Account number: ";
      cin >> account_no;

      cout << "Enter the Account Holder's name: ";
      cin.ignore();
      getline(cin, holder_name);

      cout << "Enter initial balance: ";
      cin >> balance;

      cout << "\nAccount number: " << account_no << "\n";
      cout << "Account Holder: " << holder_name << "\n";
      cout << "Balance: Rs. " << balance << "\n";
      cout << "================================\n";
      cout << "Account Created successfully! \n";
    }

    void deposit() {
      double amount;

      cout << "Enter the amount to deposit: ";
      cin >> amount;

      if (amount <= 0 ) {
        cout << "Amount must be greater than 0\n";
      }else{
        balance = balance + amount;
        cout << "Deposited Successfully!\n";
      }
    }

    void withdraw() {
      double amount;

      cout << "Enter the amount to withdraw: ";
      cin >> amount;

      if (amount <= 0 ) {
        cout << "Amount must be greater than 0!\n";
      }else if(balance < amount){
        cout << "Insufficient Balance!\n";
      }else{
        balance = balance - amount;
        cout << "Withdraw Successful!\n";
      }
    }

    void display() {
      cout << "=========== Account Details =========== \n";
      cout << "Account number: " << account_no << "\n";
      cout << "Account Holder: " << holder_name << "\n";
      cout << "Balance: Rs. " << balance << "\n";
      cout << "======================================= \n";
    }
};

int main() {

  Bank account; // creating an object

  account.create_account();

  int choice;

  do {

    cout << "------------ BANK SERVICE ------------ \n";
    cout << "1. Deposit \n";
    cout << "2. Withdraw \n";
    cout << "3. Display \n";
    cout << "4. Exit \n";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice) {
      case 1:
        account.deposit();
        break;

      case 2:
        account.withdraw();
        break;

      case 3:
        account.display();
        break;

      case 4:
        cout << "Thanks for using Bank System! \n";
        break;

      default:
        cout << "Enter a valid choice!\n";
        break;
    }
    
  }while(choice !=4 );

  return 0;
}
