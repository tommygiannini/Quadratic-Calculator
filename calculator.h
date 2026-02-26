#ifndef CALCULATOR
#define CALCULATOR
#include <iostream>
#include <cmath>
#include <vector>


std::vector<double> quadCalc(double a, double b, double c);

// pass by const reference to avoid copying and match definition
void printSolutions(const std::vector<double>& solutions);

#endif