#include<iostream>
using namespace std;

int main(void)
{
    int year, month, day;
    cin >> year >> month >> day;
    if ((year + month + day) % 1000 / 100 % 2 == 0) {
        cout << "���";
    }
    else {
        cout << "�׷�����";
    }

    return 0;
}