// Lab 5_1
#include <iostream>
#include <cmath>

using namespace std;

double h(const double x, const double y); // прототип

int main()
{
	double s, t;


	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double k = (h(s * s, t * t) + h(s + t, 1) * h(s + t, 1)) / (1 + h(s * t, 2) * h(s * t, 2));

	cout << "k = " << k << endl;

	return 0;
}
double h(const double x, const double y) // визначення
{
	return (x * y) / (1 + x * x * y * y);
}
