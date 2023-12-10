#pragma once
#include <iostream>
#include <math.h>
#include <vector>
#include <iomanip>
#include <limits>

using namespace std;
bool isZero(double x);

bool divison(vector<vector<double>>& matrix, int step);

double maxAbs(vector<double> ar);

void minuss(vector<vector<double>>& matrix, int step);

void lineSwap(vector<vector <double>>& matrix, int step);
void output(vector<vector<double>> const& matrix);

void output(vector<double> const& matrix);
bool triangular(vector<vector<double>>& matrix, int const& numberOfEquations);
void findX(vector<vector<double>> matrix, vector <double>& result);