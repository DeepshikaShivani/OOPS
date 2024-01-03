#include <iostream>

class MyClass {
public:
    void display() {
        std::cout << "Hello" << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.display();
    return 0;
}

