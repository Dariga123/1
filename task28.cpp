#include <iostream>                         //28
#include <cmath>
using namespace std;
int main() {
	double vklad = 0;
	int proc = 0;
	cin >> vklad >> proc;
	vklad += (proc * vklad * 5) / 100;
	cout << vklad;
}