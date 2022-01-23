#include <iostream>
#include <string>

using namespace std;
int main() {
	string str = "AbaAeCe";
	string str1 = "baeeACA";

	for (char& ch : str) {
		if ('A' <= ch && ch <= 'Z') {
			ch |= 32;
		}
	}

	for (char& ch : str1) {
		if ('A' <= ch && ch <= 'Z') {
			ch |= 32;
		}
	}
	int arrA[21] = {};
	int arrB[21] = {};
	for (int i = 0; i < str.length(); i++) {
		arrA[str[i] - 'a']++;
	}

	for (int i = 0; i < str1.length(); i++) {
		arrB[str[i] - 'a']++;
	}

	for (int i : arrA) {
		cout << i << endl;
	}
}