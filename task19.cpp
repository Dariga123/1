#include <iostream>                         //19
#include <cmath>
using namespace std;
int main() {
	double k, p;
	double x, y;
	cin >> k >> p;
	x = 0.3 * k + 0.4 * p;
	y = 3 * (2 * p + 1.8 * k);
	cout << x << endl << y << endl;
} 