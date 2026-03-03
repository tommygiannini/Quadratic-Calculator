#include <iostream>
#include <vector>
#include <cmath>
#include "calculator.h"

std::vector<double> quadCalc(double a, double b, double c) {
    std::vector<double> roots {};

    if (a == 0) {
        if (b == 0) {
            return roots;
        }
        roots.push_back(-c / b);
        return roots;
    }

    double disc { b*b - 4*a*c };
    if (disc < 0) {
        return roots;
    }
    roots.push_back((-b + sqrt(disc)) / (2 * a));
    roots.push_back((-b - sqrt(disc)) / (2 * a));
    if (roots[0] == roots[1]) {
        roots.pop_back();
    }
    return roots;
}

void printSolutions(const std::vector<double>& solutions) {
    if (solutions.size() < 1) {
        std::cout << "No real roots\n";
        return;
    } else if (solutions.size() == 1) {
        std::cout << "Root:\n    " << solutions[0] << "\n\n";
        return;
    }
    std::cout << "Roots:\n    "
              << solutions[0] << ", " << solutions[1] << "\n\n";
}