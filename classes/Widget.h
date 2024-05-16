#ifndef ADVANCED_WIDGET_H
#define ADVANCED_WIDGET_H

class Widget {
public:
    void enable();
    void disable();
    bool isEnabled() const;

private:
    bool enabled;

protected:
    int width;
};

#endif // ADVANCED_WIDGET_H