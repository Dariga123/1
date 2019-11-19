#include <iostream>                         //16
#include <cmath>
using namespace std;
int main() {
	double a, b, c;
	double s1, s2, s3, s;
	cin >> a >> b >> c;
	s1 = (a * 2);
	s2 = (b - 3);
	s3 = (pow(c, 2));
	s = s1 + s2 + s3;
	cout << s1 << endl << s2 << endl << s3 << endl << s;
}  