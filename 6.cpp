#include <iostream>
using namespace std;
class MyNumber {
private:
    int value;
public:
    MyNumber(int val) : value(val) {}
    MyNumber operator-(const MyNumber& other) const {
        return MyNumber(this->value - other.value);
    }
    int getValue() const {
        return value;
    }
};
int main() {
    MyNumber num1(100);
    MyNumber num2(200);
    MyNumber result = num1 - num2;
    cout << "Result is: " << result.getValue() << endl;
    return 0;
}

