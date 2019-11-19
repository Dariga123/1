#include <iostream>                         //34
#include <cmath>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x > 3) {
		x = x + 10;
	}
	else {
		x = x - 10;
		cout << x << endl;
	}
	cout << x;
}