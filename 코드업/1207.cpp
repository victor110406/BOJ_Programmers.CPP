#include<iostream>
using namespace std;

int main()
{
    int a[4] = {};
    int num = 0;
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            num++;
        }
    }
    switch (num) {
    case 1:
        cout << "��";
        break;
    case 2:
        cout << "��";
        break;
    case 3:
        cout << "��";
        break;
    case 4:
        cout << "��";
        break;
    default:
        cout << "��";
        break;
    }

    return 0;
}