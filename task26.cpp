#include <iostream>                         //26
#include <cmath>
using namespace std;
int main() {
	int x, y;
	cin >> x >> y;
	swap(x, y);
	cout << x << " " << y;
	//t=x;
	x = y;
	y = t;
}