#include <iostream>                         //41
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n > 100 || n < -100) {
		cout << 0;
	}
	else {
		cout << n + 1;
	}
}