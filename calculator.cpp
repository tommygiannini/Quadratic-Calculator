#include <iostream>
#include <vector>
#include <cmath>
#include "calculator.h"

std::vector<double> quadCalc(double a, double b, double c) {
    double disc = b*b - 4*a*c;
    double sr   = std::sqrt(disc);
    double denom = 2.0 * a;                  // parentheses matter
    return { (-b + sr) / denom, (-b - sr) / denom };
}

void printSolutions(const std::vector<double>& solutions) {
    if (solutions.size() < 2) {
        std::cout << "No solutions available\n";
        return;
    }
    std::cout << "Roots:\n    "
              << solutions[0] << ", " << solutions[1] << "\n\n";
}