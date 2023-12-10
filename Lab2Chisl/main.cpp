#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>
#include <iomanip>
#include <limits>
#include "Gauss1.h"
#include "Newton.h"

using namespace std;
int main()
{
	int NIT;
	std::cout << "Enter NIT: ";
	cin >> NIT;
	double x1_1 = 3;
	double x2_1 = 2;

	double M1 = 0.01, M2 = 0.05, M3 = 0.1;

	double e = 1e-5;
	double e2 = e;
	// Решение системы для каждого начального приближения
	solve(x1_1, x2_1, e, e2, NIT);
	solve1(x1_1, x2_1, e, e2, NIT,M1);
	solve1(x1_1, x2_1, e, e2, NIT, M2);
	solve1(x1_1, x2_1, e, e2, NIT, M3);
	return 0;
}

