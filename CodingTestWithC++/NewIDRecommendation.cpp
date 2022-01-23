#include <iostream>
#include <vector>
using namespace std;

string solution(string new_id) {
	for (char& ch : new_id) {
		if ('A' <= ch && ch <= 'Z') {
			ch |= 32;
		}
	}

	string ret;

	for (char& ch : new_id) {
		if ('a' <= ch && ch <= 'z' ||
			'0' <= ch && ch <= '9' ||
			strchr("-_.", ch)) {
			ret += ch;
		}
	}

	new_id = ret;
	ret.clear();
	for (char& ch : new_id) {
		if (!ret.empty() && ret.back() == '.' && ch == '.') continue;
		ret += ch;
	}

	if (ret.front() == '.') ret.erase(ret.begin());
	if (ret.back() == '.') ret.pop_back();
	return new_id;
}

int main() {
	string str = solution("...!@BaT#*..y.abcdefghijklm");
	cout << str;
	return 0;
}