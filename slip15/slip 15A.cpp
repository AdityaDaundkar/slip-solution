#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int num, int den) {
        numerator = num;
        denominator = den;
    }

    int getNumerator() {
        return numerator;
    }

    int getDenominator() {
        return denominator;
    }

    void setNumerator(int num) {
        numerator = num;
    }

    void setDenominator(int den) {
        denominator = den;
    }

    Fraction add(Fraction other) {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    void display() {
        std::cout << numerator << "/" << denominator << std::endl;
    }
};

int main() {
    Fraction frac1(1, 2);
    Fraction frac2(1, 3);
    Fraction sum = frac1.add(frac2);

    std::cout << "Fraction 1: ";
    frac1.display();

    std::cout << "Fraction 2: ";
    frac2.display();

    std::cout << "Sum: ";
    sum.display();

    return 0;
}
