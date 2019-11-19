#include <iostream>                         //43
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n == 1 || n == 2 || n == 12) {
		cout << "winter";
	}
	if (n == 3 || n == 4 || n == 5) {
		cout << "spring";
	}
	if (n == 6 || n == 7 || n == 8) {
		cout << "summer";
	}
	if (n == 9 || n == 10 || n == 11) {
		cout << "autumn";
	}
}