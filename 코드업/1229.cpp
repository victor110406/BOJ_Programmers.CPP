#include<iostream>
using namespace std;

int main() {

	double a, b, mkg = 0;
	cin >> a >> b;
	if (a < 150) {
		mkg = a - 100;
	}
	else if (a < 160) {
		mkg = (a - 150) / 2 + 50;
	}
	else {
		mkg = (a - 100) * 0.9;
	}

	mkg = (b - mkg) * 100 / mkg;


	if (mkg <= 10) {
		cout << "����";
	}
	else if (mkg <= 20) {
		cout << "��ü��";
	}
	else {
		cout << "��";
	}

	return 0;
}