#include <iostream>                         //35
#include <cmath>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x < 7) {
		cout << "YES";
	}
	if (x > 10) {
		cout << "NO";
	}
	if (x == 9) {
		cout << "ERROR";
	}
}