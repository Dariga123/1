#include <iostream>                         //21
#include <cmath>
using namespace std;
int main() {
	double x, y;
	double s, g, p;
	cin >> x >> y;
	s = 0.5 * (x * y);
	g = sqrt(x * x + y * y);
	p = x + y + g;
	cout << s << endl << g << endl << p << endl;
}