#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b + c || b >= a + c || c >= a + b) {
        cout << "�ﰢ���ƴ�";
    }
    else if (a == b && a == c) {
        cout << "���ﰢ��";
    }
    else if (a == b || b == c || c == a) {
        cout << "�̵�ﰢ��";
    }
    else if (a * a + b * b == c * c) {
        cout << "�����ﰢ��";
    }
    else {
        cout << "�ﰢ��";
    }

    return 0;
}