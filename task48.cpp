#include <iostream>                         //48
#include <cmath>
using namespace std;
int main() {
	int n, m, x;
	int s1, s2, s3;
	cin >> n >> m >> x;
	s1 = n + m;
	s2 = n + x;
	s3 = m + x;
	if (s1 > s2 && s1 > s3) {
		cout << n << " " << m;
	}
	else if (s2 > s1 && s2 > s3) {
		cout << n << " " << x;
	}
	else {
		cout << m << " " << x;
	}
}