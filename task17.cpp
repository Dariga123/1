#include <iostream>                         //17
#include <cmath>
using namespace std;
int main() {
	double a, b, c;
	double s, raz;
	cin >> a >> b >> c;
	s = (a + b + c) / 3;
	raz = (2 * (a + c) - 3 * b);
	cout << s << endl << raz;
}