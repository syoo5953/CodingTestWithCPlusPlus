#include <iostream>
#include <vector>

using namespace std;

int main() {
	int length = 7;
	int arr[] = { 80, 96, 75, 82, 96, 92, 100 };

	for (int i = 0; i < length - 1; i++) {
		int idx = i;
		for (int j = i + 1; j < length; j++) {
			if (arr[j] > arr[idx]) idx = j;
		}
		int temp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = temp;
	}
	cout << arr[3];
	return 0;
}