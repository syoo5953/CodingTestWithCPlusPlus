#include <iostream>
#include <string>

using namespace std;

int main() {
	int a;
	cin >> a;
	string str;
	for (int i = 1; i <= a; i++) {
		str += to_string(i);
	}

	cout << str.length();
	return 0;
}