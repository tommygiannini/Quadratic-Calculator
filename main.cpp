#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include "calculator.h"

int main() {
    double a {};
    double b {};
    double c {};

    while (true) {
        std::cout << "Enter the a, b, and c of the quadratic you want the roots of (separated by spaces) using ax^2 + bx + c. (q to quit)\n";
            std::string input;
        if (!(std::cin >> input))
            break;                            // end of file or error
        if (input == "q")
            break;
        // we read the first token as a string; convert it to double
        a = std::stod(input);
        std::cin >> b >> c;

        std::vector<double> solutions = quadCalc(a, b, c);
        printSolutions(solutions);
    }

    return 0;
}