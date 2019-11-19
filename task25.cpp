#include <iostream>                         //25
#include <cmath>
using namespace std;
int main() {
	int w, m, y, d;
	cin >> w >> m >> y;
	d = w * 7 + 30 * m + 365 * y;
	cout << d;
}