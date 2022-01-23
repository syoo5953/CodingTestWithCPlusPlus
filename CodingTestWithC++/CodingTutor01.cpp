#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string dopa = "life is limited";

	cout << dopa.substr(0,3) << endl;

	reverse(dopa.begin(), dopa.begin() + 4);
	cout << dopa;


	return 0;
}