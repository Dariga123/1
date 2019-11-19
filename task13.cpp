#include <iostream>                           //13
#include <cmath>
using namespace std;
int main() {
	double a, b, x, s;
	cin >> a >> b >> x;
	s = pow((x * x + b), 1.0 / 5.0) - (b * b * pow(sin(x + a), 3.0)) / x;
	cout << s;
}