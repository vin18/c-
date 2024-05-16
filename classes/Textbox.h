#ifndef ADVANCED_TEXTBOX_H
#define ADVANCED_TEXTBOX_H

#include <string>
#include "Widget.h"
using namespace std;

class Textbox : public Widget {
public:
    string getValue();
    void setValue(const string& value);

private:
    string value;
};

#endif // ADVANCED_TEXTBOX_H