#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	char arr[101] = "1230565625";;
	char ch[10];
	for (int i = 0; i < sizeof(arr) / sizeof(char); i++) {
		cout << arr[i] - 48 << endl;
		ch[arr[i] - 48]++;
	}

	int max = INT_MIN, answer;
	for (int i = 0; i < 9; i++) {
		if (max < ch[i]) {
			max = ch[i];
			answer = i;
		}
	}

	cout << answer;
	return 0;
}