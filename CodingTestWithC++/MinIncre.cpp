#include <iostream>
#include <vector>

using namespace std;

int minimumSwaps(vector<int> arr) {
	int smallest = arr[0], arrSum = 0, n = arr.size();
	
	for (int i = 0; i < n; i++) {
		if (smallest > arr[i]) {
			smallest = arr[i];
		}
		arrSum += arr[i];
	}
	cout << arrSum << " " << smallest << endl;
	return arrSum - (n * smallest);
}

int main() {
	vector<int> arr = { 5, 6, 2, 4, 3 };
	int answer = minimumSwaps(arr);
	printf("%d", answer);
	return 0;
}