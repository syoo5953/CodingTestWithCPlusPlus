#include <iostream>

using namespace std;
int a[] = { 2, 4, 6, 8 };
int n = 4;
int m = 12;
int path[11];
int cnt = 0;
void DFS(int L, int sum) {
	
	if (L == n) {
		for (int i = 0; i < L; i++) {
			cout << path[i] << " ";
		}
		cout << " SUM = " << sum << endl;
		if (sum == m) {
			cnt++;
		}
	}

	else {
		path[L] = a[L];
		DFS(L + 1, sum + a[L]);
		path[L] = -a[L];
		DFS(L + 1, sum - a[L]);
		path[L] = 0;
		DFS(L + 1, sum);
	}
}

int main() {
	DFS(0, 0);
	cout << cnt;
	return 0;
}