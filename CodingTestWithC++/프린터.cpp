#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    queue<int> printer;                         //queue에 index 삽입.
    vector<int> sorted;                         //정렬된 결과 저장용
    for (int i = 0; i < priorities.size(); i++) {
        printer.push(i);
    }

    while (!printer.empty()) {
        int now_index = printer.front();
        printer.pop();
        if (priorities[now_index] != *max_element(priorities.begin(), priorities.end())) {
            //아닌경우 push
            printer.push(now_index);
            cout << now_index << endl;
        }
        else {
            //맞는경우
            sorted.push_back(now_index);
            priorities[now_index] = 0;
        }
    }
    for (int i = 0; i < sorted.size(); i++) {
        if (sorted[i] == location) return i + 1;
    }
}

int main() {
    vector<int> priorities = { 2,1,3,2 };
    int location = 2;

    solution(priorities, location);
    return 0;
}