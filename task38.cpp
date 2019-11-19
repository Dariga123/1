#include <iostream>                         //38
#include <cmath>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	if (m - n == 100 || n - m == 100) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}