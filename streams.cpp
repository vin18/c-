#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int getNumber(const string& prompt) {
    int number;
    while (true) {
        cout << prompt;
        cin >> number;
        if (cin.fail()) {
            cout << "Enter a valid number!" << endl;
            cin.clear();
            cin.ignore(10, '\n');
        }
        else break;
    }
    return number;
}

int main() {
    int first = getNumber("First: ");
    int second = getNumber("Second: ");
    cout << "You entered " << first << " and " << second << endl;

    ofstream file;
    file.open("data.csv");
    if (file.is_open()) {
        file << "id,title,year\n"
             << "1,Terminator 1,1984\n"
             << "2,Terminator 1,1991\n";
        file.close();
    }

    ifstream file;
    file.open("data.csv");
    if (file.is_open()) {
        string str;
        getline(file, str);
        cout << str;
        file.close();;
    }

    return 0;
}

