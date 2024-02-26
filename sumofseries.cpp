#include <iostream>
class SeriesSum {
private:
    double sum;
public:
    SeriesSum(double initialValue = 0) : sum(initialValue) {}
    void addTerm(double term) {
        sum += term;
    }
    double getSum() const {
        return sum;
    }
};
int main() {
    SeriesSum series(0);
    series.addTerm(1.0);
    series.addTerm(2.0);
    series.addTerm(3.0);
    series.addTerm (4.0);
    std::cout << "Sum of the series: " << series.getSum() << std::endl;
    return 0;
}
