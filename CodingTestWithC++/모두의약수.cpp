#include <iostream>
#include <string>

using namespace std;

int main() {
	int a;
	string str;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		int cnt = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) cnt++;
		}
		str += to_string(cnt) + " ";
	}
	cout << str;
	return 0;
}