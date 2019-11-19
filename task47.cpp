#include <iostream>                         //47
#include <cmath>
using namespace std;
int main() {
	int n, m, x;
	cin >> n >> m >> x;
	if (n > m && n > x) {
		cout << n;
	}
	else if (m > n && m > x) {
		cout << m;
	}
	else {
		cout << x;
	}
}