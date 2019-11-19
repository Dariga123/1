#include <iostream>                         //46
#include <cmath>
using namespace std;
int main() {
	int n, m, x;
	cin >> n >> m >> x;
	if (n % 5 == 0 && m % 5 == 0) {
		cout << n + m;
	}
	else if (n % 5 == 0 && x % 5 == 0) {
		cout << n + x;
	}
	else if (m % 5 == 0 && x % 5 == 0) {
		cout << m + x;
	}
	else {
		cout << "error";
	}
}