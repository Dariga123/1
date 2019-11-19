#include <iostream>                         //44
#include <cmath>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	if (n != 10 && n % 2 == 0 && m != 10) {
		cout << n + m;
	}
	else {
		cout << n * m;
	}
}