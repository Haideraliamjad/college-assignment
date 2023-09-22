#include <iostream>

int main() {
    double sum_series = 0.0;
    int n = 1;

    do {
        sum_series += 1.0 / n;
        n += 2;
    } while (n <= 100);

    std::cout << "Sum of the series: " << sum_series << std::endl;

    return 0;
}
