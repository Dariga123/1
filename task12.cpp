#include <iostream>               //12
#include <cmath>
using namespace std;
int main() {
	double x, s, e=2.71828182846;
	cin >> x;
	s = pow(e, (x - 2)) + abs(sin(x)) - pow(x, 4) * cos(1 / x);
	cout << s;
}