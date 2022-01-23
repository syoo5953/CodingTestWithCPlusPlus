#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<int> T = { 0,4,2,3,3,2,2,1 };
vector<int> P = { 0,20,10,15,20,30,20,10 };
int n = 7;
int val = 0;
int res = 0;
void DFS(int L, int val) {
	if (L == n + 1) {
		if (val > res) res = val;
	}
	else {
		if (L + T[L] <= n + 1) DFS(L + T[L], val + P[L]);
		DFS(L + 1, val);
	}
}

int main() {
	DFS(1, 0);
	cout << res;
}