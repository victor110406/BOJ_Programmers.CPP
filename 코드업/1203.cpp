#include<iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a <= 10) {
		cout << "����";
	}
	else if (a > 10 && a <= 20) {
		cout << "��ü��";
	}
	else {
		cout << "��";
	}


	return 0;
}