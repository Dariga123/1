#include <iostream>                         //20
#include <cmath>
using namespace std;
int main() {
	double v, r, a;
	cin >> v >> r;
	a = (r * 1000) / (v * 60);
	cout << a;
}