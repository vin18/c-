#include <iostream>

using namespace std;

enum class Action {
    List,
    Add,
    Update
};

enum class Operation {
    List,
    Add,
    Update
};

int main() {
    cout << 
        "1: List invoices" << endl << 
        "2: Add invoice" << endl << 
        "3: Update invoice" << endl << 
        "Select: ";

    int input;
    cin >> input;

    if (input == static_cast<int>(Action::List)); 
        cout << "List invoices";

    return 0;
}