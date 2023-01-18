#include <iostream>

struct Rectangle {
    int width;
    int height;
};

int main() {
    Rectangle r = {10, 5};
    Rectangle* p = &r;

    std::cout << "Width: "<< (*p).width << '\n'; // 10
    // The dot(.) operator has higher precedence than * operator.
    // That's why we'are using () around *p.

    // Better way to access struct elements
    std::cout << "Width: "<< p->width << '\n'; // 10

    // Using pointer to initialize struct
    Rectangle* ptr = new Rectangle;
    ptr->width = 90;
    ptr->height = 120;

    std::cout << "Height: "<< ptr->height << '\n'; // 120

    return 0;
}

