#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double len, double wid) : length(len), width(wid) {
        cout << "Rectangle object created with length = " << length << " and width = " << width << endl;
    }
    ~Rectangle() {
        cout << "Rectangle object destroyed" << endl;
    }
    double calculateArea() {
        return length * width;
    }
};
int main() {
    Rectangle rect(425.0, 23.0);
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;
    return 0;
}

