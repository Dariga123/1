#include <iostream>                         //24
#include <cmath>
using namespace std;
int main() {
	int days, sale, sum;
	cin >> days >> sale >> sum;
	sale /= 100;
	for (int i = 0; i < days; i++) {
		sum += 3;                      // ���������� 3$
		sum += sum * sale;               //������ ���� �� �����
	}
	cout << sum;
}