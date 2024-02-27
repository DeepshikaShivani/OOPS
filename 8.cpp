#include <iostream>
#include <exception>
using namespace std;
class MyException : public exception {
public:
    virtual const char* what() const throw() {
        return "My Custom Exception: Something went wrong!";
    }
};
int main() {
    try {
        throw MyException();
    }
    catch (const MyException& e) {
        cout << "Caught Exception: " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "Caught Exception: " << e.what() << endl;
    }
    return 0;
}

