#include <iostream>

// Base class
class Shape {
public:
    // Virtual function for area calculation
    virtual double calculateArea() const {
        return 0.0;
    }
};

// Derived class 1: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override the base class function
    double calculateArea() const override {
        return 3.14 * radius * radius;
    }
};

// Derived class 2: Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override the base class function
    double calculateArea() const override {
        return length * width;
    }
};

int main() {
    // Using pointers to achieve polymorphism
    Shape* shapePtr;

    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Pointing to a Circle object
    shapePtr = &circle;
    std::cout << "Area of Circle: " << shapePtr->calculateArea() << std::endl;

    // Pointing to a Rectangle object
    shapePtr = &rectangle;
    std::cout << "Area of Rectangle: " << shapePtr->calculateArea() << std::endl;

    // Using references to achieve polymorphism
    Shape& shapeRef1 = circle;
    Shape& shapeRef2 = rectangle;

    std::cout << "Area of Circle (using reference): " << shapeRef1.calculateArea() << std::endl;
    std::cout << "Area of Rectangle (using reference): " << shapeRef2.calculateArea() << std::endl;

    return 0;
}

