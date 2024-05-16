#include "Rectangle.h"
#include "Person.h"
#include "SmartPointer.h"
#include "Textbox.h"
#include "Widget.h"
#include <iostream>
#include <memory>

using namespace std;

void showPerson(Person person) {
}

void showRectangle(Rectangle rectangle) {
}

int main() {
    Textbox box;
    box.disable();
    cout << box.isEnabled();

    return 0;
}

int main1() {
    Person person{20};
    showPerson(person);

    Rectangle first{10, 20};
    Rectangle second = first;
    cout << Rectangle::getObjectsCount() << endl;

    // Immutable objects
    const Rectangle rectangle;
    rectangle.getHeight();

    Rectangle* rectangle1 = new Rectangle(10, 20);
    rectangle1->draw();
    delete rectangle1;
    rectangle1 = nullptr;

    // Using smart pointer
    auto rectangle2 = make_unique<Rectangle>(10, 20);
    rectangle2->draw();

    int* ptr = new int;
    SmartPointer ptr1{new int};

    // Array of objects
    Rectangle rectangles[] = {
        // Rectangle(),
        // Rectangle(10, 20),
        // Rectangle(10, 20, "blue"),

        {},
        {10, 20},
        {10, 20, "blue"},
    };
    
    for (Rectangle& rect : rectangles) 
        rect.draw();

    return 0;
}