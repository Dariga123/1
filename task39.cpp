#include <iostream>                         //39
#include <cmath>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	if (n > m) {
		cout << "YES";
	}
	else {
		swap(n, m);
		cout << n << " " << m;
	}
}