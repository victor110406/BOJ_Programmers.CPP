#include<iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << a - b;
    }
    else {
        cout << b - a;
    }

    return 0;
}