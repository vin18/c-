#include <iostream>
#include <string>

using namespace std;

void cString() {
    // char name[5] = {'M', 'o', 's', 'h', '\0'};
    char name[50] = "Mosh";
    char lastName[] = "Hamedani";

    // Concatenating
    strcat(name, lastName);
    strcpy(name, lastName);
    if (strcmp(name, lastName) == 0) cout << "Equal";
    cout << name;

    // Length
    cout << strlen(name) << endl;
}

int main() {
    string name = "Mosh";
    string another = name;
    name[0] = 'm';

    name += " Hamedani";
    cout << name.length();
    cout << name;
    if (name == another) cout << "Same";
    name.empty();

    // Modifying string
    name.append(" Hamedani");
    name.insert(0, "I am ");
    name.erase(0, 2);
    name.clear();
    name.replace(0, 2, "MO");
    cout << name;

    // Searching string
    name.find('a', 7);
    if (name.find('Ham') == -1) cout << "Doesn't Exist!";
    cout << name.rfind('a');
    cout << name.find_first_of(',.;');
    cout << name.find_last_of(',.;');
    cout << name.find_first_not_of(',.;');
    cout << name.find_last_not_of(',.;');

    return 0;
}