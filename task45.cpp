#include <iostream>                         //45
#include <cmath>
using namespace std;
int main() {
	int n, m, x;
	cin >> n >> m >> x;
	if (n > 10 && m > 10 && x > 10 && n % 3 == 0 && m % 3 == 0) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}