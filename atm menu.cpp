#include <iostream>
using namespace std;

int main()
 {
    int choice;

    cout << "--- ATM Menu ---" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Check Balance" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
	 {
        case 1:
            cout << "Deposit operation selected." << endl;
            break;
        case 2:
            cout << "Withdraw operation selected." << endl;
            break;
        case 3:
            cout << "Check Balance operation selected." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}
