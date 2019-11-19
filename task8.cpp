 #include <iostream>               //8
  #include <cmath>
  using namespace std;
  int main() {
	int a, b, s;
	cin >> a >> b;
	s = (a + 4*b)*(a-3*b) + pow(a,2);
	cout << s << endl;
  }