#include <iostream>     // std::cout, std::showpoint, std::noshowpoint, std::fixed, std::scientific
#include "myio.h"

using namespace std;

void getShowpointResult() {
	double a = 30;
	double b = 10000.0;
	double pi = 3.1416;

	cout.precision(5);
	cout << showpoint << a << '\t' << b << '\t' << pi << '\n';
	cout << noshowpoint << a << '\t' << b << '\t' << pi << '\n';
}

void testFloatingNotation() {
	double a = 3.1415926534;
	double b = 2006.0;
	double c = 1.0e-10;

	cout.precision(10);

	cout << "default:\n";
	cout << a << '\n' << b << '\n' << c << '\n';

	cout << '\n';

	cout << "fixed:\n" << std::fixed;
	cout << a << '\n' << b << '\n' << c << '\n';

	cout << '\n';

	cout << "scientific:\n" << scientific;
	cout << a << '\n' << b << '\n' << c << '\n';
	cout << '\n';

	cout.unsetf(ios_base::floatfield);
	cout << "default again:\n";
	cout << a << '\n' << b << '\n' << c << '\n';
}