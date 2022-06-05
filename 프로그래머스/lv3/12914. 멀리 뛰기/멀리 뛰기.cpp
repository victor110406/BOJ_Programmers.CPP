#include <string>
#include <vector>
using namespace std;

long long num[2001];

long long solution(int n) {
    long long answer = 0;
    num[0] = 1, num[1] = 1;

    for (int i = 2; i <= n; i++) {
        num[i] = (num[i - 1] + num[i - 2]) % 1234567;
    }
    answer = num[n];

    return answer;
}