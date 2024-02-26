#include <iostream>
class Fraction {
private:
    int numerator;
    int denominator;
    int gcd(int a, int b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
public:
    Fraction() : numerator(0), denominator(1) {}
    Fraction(int num, int denom) : numerator(num), denominator(denom) {}
    void simplify() {
        int commonDivisor = gcd(numerator, denominator);
        numerator /= commonDivisor;
        denominator /= commonDivisor;
    }
    void display() const {
        std::cout << numerator << "/" << denominator;
    }
};
int main() {
    int numerator, denominator;
    std::cout << "Enter numerator: ";
    std::cin >> numerator;
    std::cout << "Enter denominator: ";
    std::cin >> denominator;
    Fraction fraction(numerator, denominator);
    fraction.simplify();
    std::cout << numerator << "/" << denominator << " is simplified as ";
    fraction.display();
    std::cout << std::endl;
    return 0;
}
