#include<iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    if (a % 2 == 0) {
        cout << "¦��" << "+";
    }
    else {
        cout << "Ȧ��" << "+";
    }
    if (b % 2 == 0) {
        cout << "¦��" << "=";
    }
    else {
        cout << "Ȧ��" << "=";
    }
    if ((a + b) % 2 == 0) {
        cout << "¦��";
    }
    else {
        cout << "Ȧ��";
    }

    return 0;
}