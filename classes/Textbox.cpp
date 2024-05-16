#include <iostream>
#include "Textbox.h" 

using namespace std;

string Textbox::getValue() {
    return value;
}

void Textbox::setValue(const string& value) {
    this->value = value;
}