#ifndef ADVANCED_SMART_POINTER_H
#define ADVANCED_SMART_POINTER_H

#include <string>
using namespace std;

class SmartPointer {
public:
    explicit SmartPointer(int* ptr);
    ~SmartPointer();

private:
    int* ptr;
};

#endif // ADVANCED_SMART_POINTER_H