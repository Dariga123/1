#include <iostream>                         //49
#include <cmath>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;;
	if (a % 2 == 0 && a > b && a > c && a > d) {
		cout << a;
	}
	else if (b % 2 == 0 && b > c && b > d && b > a) {
		cout << b;
	}
	else if (c % 2 == 0 && c > b && c > d && c > a) {
		cout << c;
	}
	else if (d % 2 == 0 && d > c && d > b && d > a) {
		cout << d;
	}
}