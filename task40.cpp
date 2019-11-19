#include <iostream>                         //40
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n > -10 && n < 10) {
		cout << n + 5;
	}
	else {
		cout << n - 10;
	}
}