#include <iostream>               //11	
#include <cmath>
using namespace std;
int main() {
	double x, s;
	cin >> x;
	s = (abs(x - 5) - sin(x)) / 3.0 + sqrt(x * x + 2014) * cos(2 * x) - 3.0;
	cout << s;
}