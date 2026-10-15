#include <iostream>
using namespace std;

class Rectangle {
    private:
        double length;
        double width;
        
    public:
        // Constructor
        Rectangle(double l=5.0, double w=3.0) : length(l), width(w) {}
        //getters
        double getLength() const { return length; }
        double getWidth() const { return width; }
        // Setters
        void setLength(double l) { length = l; }
        void setWidth(double w) { width = w; }
        // Method to calculate area
        double getArea() const { return length * width; }
        // Method to calculate perimeter
        double getPerimeter() const { return 2 * (length + width); }
};

int main() {
    Rectangle rectangle_1;
    // Modify the dimensions
    rectangle_1.setLength(7.0);
    rectangle_1.setWidth(4.0);
    
    // Display the updated length and width
    cout << "Length: " << rectangle_1.getLength() << endl;
    cout << "Width: " << rectangle_1.getWidth() << endl;
    
    // Display the updated area and perimeter
    cout << "Area: " << rectangle_1.getArea() << endl;
    cout << "Perimeter: " << rectangle_1.getPerimeter() << endl;

    return 0;
}