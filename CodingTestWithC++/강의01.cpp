#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int sum = a;
	cout << a;
	for (int i = a+1; i <= b; i++) {
		cout << "+" << i;
		sum += i;
	}
	cout << "=" << sum;
	return 0;
}