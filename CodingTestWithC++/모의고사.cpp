#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> A = { 1,2,3,4,5 };
    vector<int> B = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> C = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    int answerA = 0, answerB = 0, answerC = 0;
    for (int i = 0; i < answers.size(); i++) {
        if (A[i%A.size()] == answers[i]) {
            answerA++;
        }

        if (B[i% B.size()] == answers[i]) {
            answerB++;
        }

        if (C[i% C.size()] == answers[i]) {
            answerC++;
        }
    }
    int max = std::max(answerA, std::max(answerB, answerC));
    if (answerA == max) answer.push_back(1);
    if (answerB == max) answer.push_back(2);
    if (answerC == max) answer.push_back(3);
    return answer;
}

int main() {
    vector<int> vec = { 1,3,2,4,2 };
    vector<int> answer = solution(vec);
    for (auto& i : answer) {
        cout << i;
    }
    return 0;
}