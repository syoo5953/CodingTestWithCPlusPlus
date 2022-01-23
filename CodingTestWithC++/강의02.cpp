#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a;
	cin >> a;
	vector<int> vec(a);
	int max = INT_MIN;
	int min = INT_MAX;
	for (int i = 0; i < vec.size(); i++) {
		int temp;
		cin >> temp;

		if (temp > max) {
			max = temp;
		}

		if (temp < min) {
			min = temp;
		}
	}

	cout << max - min;
	return 0;
}