#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	getline(cin, str);
	string answer;
	for (char& ch : str) {
		if ('A' <= ch && ch <= 'Z') {
			ch |= 32;
		}

		if (ch != ' ') {
			answer += ch;
		}
	}
	cout << answer;
	return 0;
}