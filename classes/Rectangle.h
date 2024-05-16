#ifndef ADVANCED_RECTANGLE_H
#define ADVANCED_RECTANGLE_H

#include <string>
using namespace std;

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(const Rectangle& source);
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    ~Rectangle();

    void draw() const;
    int getArea();
    
    int getWidth() const;
    void setWidth(int width);

    int getHeight() const;
    void setHeight(int height);

    static int getObjectsCount();

private:
    static int objectsCount;

    int width = 0;
    int height = 0;
    string color;
};

#endif // ADVANCED_RECTANGLE_H