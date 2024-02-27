#include <iostream>
using namespace std;
int main() {
    float num1, num2, num3, largest;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    cout << "Largest number: " << largest << endl;

    return 0;
}

