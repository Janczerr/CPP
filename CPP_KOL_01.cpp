
#include <iostream>

using namespace std;

class Rectangle {
private:
    double height;
    double width;
public:
    Rectangle();
    Rectangle(double x);
    Rectangle(double x, double y);
    double getHeight();
    double getWidth();
    void setHeight(double x);
    void setWidth(double x);
    double area();
    static double perimeter(const Rectangle &rectangle);
};

int main() {
    Rectangle rect(6);
    cout << "Width: " << rect.getWidth() << " Height: " << rect.getHeight() << " Pole: " << rect.area() << endl;
    rect.setWidth(10);
    cout << "Width: " << rect.getWidth() <<  " Height: " << rect.getHeight() << " Pole: " << rect.area() << endl;
    cout << "Obwod: " << rect.perimeter(rect);
}

Rectangle::Rectangle() {
    height = 0;
    width = 0;
}

Rectangle::Rectangle(double x) {
    height = x;
    width = x;
}

Rectangle::Rectangle(double x, double y) {
    height = x;
    width = y;
}

void Rectangle::setHeight(double x) {
    height = x;
}

void Rectangle::setWidth(double x) {
    width = x;
}

double Rectangle::getHeight() {
    return height;
}

double Rectangle::getWidth() {
    return width;
}

double Rectangle::area() {
    double pole;
    pole = height * width;
    return pole;
}

double Rectangle::perimeter(const Rectangle &rectangle) {
    double ob;
    ob = (rectangle.height * 2) + (rectangle.width * 2);
    return ob;
}
