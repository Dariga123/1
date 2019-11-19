#include <iostream>                         //50
#include <cmath>
using namespace std;
int main() {
	int n, m, x;
	cin >> n >> m >> x;
	if (n == m || n == x || m == x) {
		cout << "YES";
	}
}