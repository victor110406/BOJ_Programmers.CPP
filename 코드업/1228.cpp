#include<iostream>
using namespace std;

int main()
{
    double cm, kg, result;
    cin >> cm >> kg;
    result = (cm - 100) * 0.9;
    result = (kg - result) * 100 / result;
    if (result <= 10) {
        cout << "����";
    }
    else if (result > 10 && result <= 20) {
        cout << "��ü��";
    }
    else {
        cout << "��";
    }

    return 0;
}