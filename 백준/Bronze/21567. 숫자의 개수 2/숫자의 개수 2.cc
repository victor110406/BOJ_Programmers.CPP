#include <iostream>

using namespace std;

int main() {

    long long A, B, C;
    long long sum;
    int a[11]={};
    cin >> A >> B >> C;
    sum = A * B * C;
    while (sum > 0) {
        a[sum % 10]++;
        sum /= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << a[i] << '\n';
    }
    
    return 0;
}